// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
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


	
};
