// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/Engine.h"
#include "CoreMinimal.h"
#include "Customer_struct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MANATARMS_PROJECT_API FCustomer_struct
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int CustomerNum;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString name;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int desiredFood;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int desiredDrink;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        bool satisfied;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        bool sat_f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        bool sat_d;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float satisfactionLevel;
};
