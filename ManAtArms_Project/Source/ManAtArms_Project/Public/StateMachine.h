// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StateStruct.h"
#include "StateMachine.generated.h"

UCLASS()
class MANATARMS_PROJECT_API AStateMachine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStateMachine();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AI)
	//static TArray<FStateStruct> states;

	//UFUNCTION(BlueprintCallable, Category = "DecisionMaking")
		//static int CheckStates(int currentState_);


};
