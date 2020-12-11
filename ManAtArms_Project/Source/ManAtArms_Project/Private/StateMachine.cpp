// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachine.h"

// Sets default values
AStateMachine::AStateMachine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AStateMachine::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStateMachine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//int AStateMachine::CheckStates(int currentState_)
//{
//	if (states.IsValidIndex(currentState_)) {
//		for (int i = 0; i < (states[currentState_].conditions.Num() - 1); i++) {
//			return states[currentState_].conditions[i];
//		}
//	}
//	return currentState_;
//}

