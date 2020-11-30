// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Math/Matrix.h"
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

	
};
