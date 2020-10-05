// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tetrehedron.generated.h"

UCLASS()
class MANATARMS_PROJECT_API ATetrehedron : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATetrehedron();

protected:
	ATetrehedron();
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnyWhere)
		class UStaticMeshComponent* staticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
		class UProjectileMovementComponent* ProjectileMovement;
	
	FVector pos;
	FVector rotation;
	FVector accel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector angVel;
	FVector vel;
	FQuat angularVelocity;
	FQuat ori;



};
