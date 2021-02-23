// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Math/Matrix.h"
#include "StateStruct.h"
#include "Misc/OutputDeviceNull.h"
#include "MyAIBPfunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MANATARMS_PROJECT_API UMyAIBPfunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		static int string1(int a, int b);

	UFUNCTION(BlueprintCallable)
		static FMatrix getInverse (float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3);

	UFUNCTION(BlueprintCallable, Category = "DecisionMaking")
		static void CheckStates(int currentState_, TArray<FStateStruct> states, UObject* decisionMaker_);


};

UENUM(BlueprintType)
enum TurnType_c
{
	CustomerTurn     UMETA(DisplayName = "CustomerTurn"),
	PlayerTurn      UMETA(DisplayName = "PlayerTurn"),
	StoryTurn   UMETA(DisplayName = "StoryTurn"),
	WaitTurn   UMETA(DisplayName = "WaitTurn"),
	MainMenuTurn   UMETA(DisplayName = "MainMenuTurn"),
	OptionTurn   UMETA(DisplayName = "OptionTurn"),
	ResultTurn   UMETA(DisplayName = "ResultTurn"),
	Opening   UMETA(DisplayName = "Opening"),

};

UENUM(BlueprintType)
enum CharacterList
{
	Narrator     UMETA(DisplayName = "Narrator"),
	Naidan      UMETA(DisplayName = "Naidan"),
	Agent1      UMETA(DisplayName = "Agent1"),
	Agent2      UMETA(DisplayName = "Agent2"),
	NONAMED      UMETA(DisplayName = "NONAMED")
	

};