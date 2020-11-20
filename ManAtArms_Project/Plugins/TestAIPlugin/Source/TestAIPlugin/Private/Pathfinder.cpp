// Fill out your copyright notice in the Description page of Project Settings.
// https://www.youtube.com/playlist?list=PLHJDrb2QPWtaxCrBaH1Ht00Trv4gH_lYB

#include "Pathfinder.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Algo/Reverse.h"
#include <EngineGlobals.h>
#include "Components/BillboardComponent.h"
#include <Runtime/Engine/Classes/Engine/Engine.h>

// Sets default values
APathfinder::APathfinder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyBillboardComp = CreateDefaultSubobject<UBillboardComponent>(TEXT("Root Billboard Comp"));
	MyBillboardComp->SetHiddenInGame(false, true);
	RootComponent = MyBillboardComp;
}

// Called when the game starts or when spawned
void APathfinder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APathfinder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector APathfinder::FindPath(FVector Start, FVector End)
{
	PathfindingNode* StartNode = GridInstance->NodeFromLocation(Start);	// Start node
	PathfindingNode* EndNode = GridInstance->NodeFromLocation(End);	// End node



	if (StartNode == nullptr) return Start;

	if (StartNode == EndNode) {
		return Start;
	}

	TArray<PathfindingNode*> OpenSet;
	TArray<PathfindingNode*> ClosedSet;

	OpenSet.Add(StartNode);

	while (OpenSet.Num()) {

		PathfindingNode* CurrentNode = OpenSet[0];

		for (int i = 0; i < OpenSet.Num(); i++) {
			if (OpenSet[i] != nullptr && OpenSet[i]->FCost() <= CurrentNode->FCost() && OpenSet[i]->HCost < CurrentNode->HCost) {
				CurrentNode = OpenSet[i];
			}
		}
		
		OpenSet.Remove(CurrentNode);
		ClosedSet.Add(CurrentNode);

		if (CurrentNode == EndNode)	{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FromInt(1));
			return RetracePath(StartNode, EndNode);
		}

		TArray<PathfindingNode*> Neighbours = GridInstance->GetNeighbourNodes(CurrentNode);

		for (int i = 0; i < Neighbours.Num(); i++) {
			if (Neighbours[i] == nullptr || ClosedSet.Contains(Neighbours[i])) {
				continue;
			}

			float NewMovementCostToNeighbour = CurrentNode->GCost + GetDistance(CurrentNode, Neighbours[i]);
			
			if (NewMovementCostToNeighbour < Neighbours[i]->GCost || !OpenSet.Contains(Neighbours[i])) {
				Neighbours[i]->GCost = NewMovementCostToNeighbour;
				Neighbours[i]->HCost = GetDistance(Neighbours[i], EndNode);
				Neighbours[i]->ParentNode = CurrentNode;
				
				if (!OpenSet.Contains(Neighbours[i])) {
					OpenSet.Add(Neighbours[i]);
				}
			}

		}

	}


	// no path found
	return GridInstance->LocationFromNode(StartNode);
}

float APathfinder::GetDistance(PathfindingNode* A, PathfindingNode* B)
{

	if (Heuristic == EHeuristic::Heuristic_Manhatten) {

		FVector ALoc, BLoc, Loc;
		ALoc = GridInstance->LocationFromNode(A);
		BLoc = GridInstance->LocationFromNode(B);

		Loc = ALoc - BLoc;

		return UKismetMathLibrary::Abs(Loc.X) + UKismetMathLibrary::Abs(Loc.Y) + UKismetMathLibrary::Abs(Loc.Z);
	}
	else if (Heuristic == EHeuristic::Heuristic_Euclidean) {
		return FVector::Distance(GridInstance->LocationFromNode(A), GridInstance->LocationFromNode(B));

	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("HEURISTIC MISSING, RETURNING 0 DISTANCE"));
	return 0;

}

FVector APathfinder::RetracePath(PathfindingNode* StartNode, PathfindingNode* EndNode)
{

	if (StartNode == EndNode) {
		return GridInstance->LocationFromNode(StartNode);
	}

	TArray<PathfindingNode*> Path;

	PathfindingNode* CurrentNode = EndNode;

	while (CurrentNode != StartNode) {
		Path.Add(CurrentNode);
		CurrentNode = CurrentNode->ParentNode;

	}

	Algo::Reverse(Path);

	//Draw path
	for (int i = 0; i < Path.Num(); i++) {
		if (Debug) {
			UKismetSystemLibrary::DrawDebugBox(this, GridInstance->LocationFromNode(Path[i]), FVector::OneVector * GridInstance->NodeSize / 2.3f, FLinearColor::Green, FRotator::ZeroRotator, 0);
		}
		
	}

	return GridInstance->LocationFromNode(Path[1]);
}