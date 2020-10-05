// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetrehedron.h"

// Sets default values
ATetrehedron::ATetrehedron()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Mesh"));

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComponent"));

	//set init vel
	//ProjectileMovement->InitialSpeed = 200.0f;
	//no gravity



}

// Called when the game starts or when spawned
void ATetrehedron::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATetrehedron::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ori += (angularVelocity * ori * (DeltaTime / 2));

	ATetrehedron::SetActorRotation(ori);
}

