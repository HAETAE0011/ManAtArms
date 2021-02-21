// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/Engine.h"
#include "Customer_struct.h"
#include "MyAIBPfunctionLibrary.h"
#include "VNPlayer_parent.generated.h"

UCLASS()
class MANATARMS_PROJECT_API AVNPlayer_parent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVNPlayer_parent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "test")
		bool donothing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		int CameraNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		int MaxCamNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		int MaxCustomerNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		int lastCustomerIndexToday;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		TArray<FCustomer_struct> customers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooking")
		int servedFood;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooking")
		int servedDrink;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		float default_satisfaction_level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		float satisfactionMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooldown")
		float cooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooldown")
		float cooldownMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooldown")
		float cooldownPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooldown")
		bool cooldownDone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		int customerBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customer")
		int currentDay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooking")
		int noodleType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooking")
		int sauceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooking")
		int toppingType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooking")
		int drinkType;

	
	/*
		0 = none
		1 = Seafood noodles
		2 = Bacon noodles
		3 = Pork ramen
		4 = Syoyu ramen
		5 = Soba
		6 = Yakisoba
		7 = Lamb skewer
		8 = Pork skewer
		9 = Chicken skewer
		10 = wrong recipe!
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooking")
		int ServingFood;
	
	/*
		0 = none
		1 = Water
		2 = Beer
		3 = Coke
		4 = Whiskey
		5 = Vodka
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooking")
		int ServingDrink;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooking")
		int foodReady = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooking")
		int drinkReady = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GamePlay")
		float money;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Test")
	void DoThing();

	UFUNCTION(BlueprintCallable, Category = "Cooldown")
	void HandleCooldown(float deltaTime);

	UFUNCTION(BlueprintCallable, Category = "Cook")
	void CookNoodle();

	UFUNCTION(BlueprintCallable, Category = "Cook")
	void ResetServed();

	UFUNCTION(BlueprintCallable, Category = "Customer")
	void AddCustomer(FString name_, int food_, int drink_);

};


