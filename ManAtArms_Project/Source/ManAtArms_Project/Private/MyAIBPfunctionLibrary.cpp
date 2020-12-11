// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIBPfunctionLibrary.h"

int UMyAIBPfunctionLibrary::string1(int a, int b)
{
	int yo = a + b;

	return yo;
}

FMatrix UMyAIBPfunctionLibrary::getInverse(float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3)
{
	FMatrix mat(FPlane(x1, x2, x3, 0),
				FPlane(y1, y2, y3, 0),
				FPlane(z1, z2, z3, 0),
				FPlane(0, 0, 0, 1));

	return mat.Inverse();
}

void UMyAIBPfunctionLibrary::CheckStates(int currentState_, TArray<FStateStruct> states, UObject* decisionMaker_)
{
	FOutputDeviceNull ar;

	if (states.IsValidIndex(currentState_)) {
		for (int i = 0; i <= (states[currentState_].conditions.Num() - 1); i++) {
			FString cmd = FString("Condition ");
			FString num = FString::FromInt(states[currentState_].conditions[i]);

			cmd.Append(num);
			//FString cmd = FString::Printf(TEXT("TestFun HelloWorld"));
			decisionMaker_->CallFunctionByNameWithArguments(*cmd, ar, NULL, true);
		}
	}
}