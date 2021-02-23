// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/Engine.h"
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MyAIBPfunctionLibrary.h"
#include "Story_Struct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MANATARMS_PROJECT_API FStory_Struct : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TEnumAsByte<CharacterList> Speaker;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FText Text;

};
