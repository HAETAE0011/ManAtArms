// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	count = 3;
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	count -= DeltaTime;
	if (count <= 0) {
		count = 3;
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Some variable values: x: %f"), count));

	/*if (USceneComponent* rootComponent = GetRootComponent()) {
		if (APawn* playerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0)) {
			FRotator lookAt = UKismetMathLibrary::FindLookAtRotation(rootComponent->GetComponentLocation(), playerPawn->GetActorLocation());

			FRotator originalRotation = rootComponent->GetComponentRotation();
			

			rootComponent->SetWorldRotation(FRotator(originalRotation.Pitch, lookAt.Yaw, originalRotation.Roll));
		}
	}*/

}

