// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateStruct.generated.h"

USTRUCT(BlueprintType)
struct MANATARMS_PROJECT_API FStateStruct
{
    GENERATED_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<int> conditions;
};