// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PathfindingGrid.h"
#include "Core/Public/HAL/Runnable.h"
#include "Core/Public/HAL/ThreadSingleton.h"
#include "Core/Public/HAL/RunnableThread.h"
#include "GameFramework/Actor.h"
#include "Pathfinder.generated.h"

UENUM(BlueprintType)
enum class EHeuristic : uint8
{
	Heuristic_Manhatten 	UMETA(DisplayName = "Manhatten"),
	Heuristic_Euclidean 	UMETA(DisplayName = "Euclidean"),

};

UCLASS()
class TESTAIPLUGIN_API APathfinder : public AActor
{
	GENERATED_BODY()
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		APathfindingGrid* GridInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		bool Debug;

	UPROPERTY(VisibleAnywhere)
		class UBillboardComponent* MyBillboardComp;

	APathfinder();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		EHeuristic Heuristic;

	UFUNCTION(BlueprintCallable, Category = "AStar")
		FVector FindPath(FVector Start, FVector End);

	FVector RetracePath(PathfindingNode* StartNode, PathfindingNode* EndNode);
	float GetDistance(PathfindingNode* A, PathfindingNode* B);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
