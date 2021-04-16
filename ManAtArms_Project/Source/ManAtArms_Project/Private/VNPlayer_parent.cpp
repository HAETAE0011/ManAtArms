// Fill out your copyright notice in the Description page of Project Settings.


#include "VNPlayer_parent.h"

// Sets default values
AVNPlayer_parent::AVNPlayer_parent()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVNPlayer_parent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVNPlayer_parent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVNPlayer_parent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AVNPlayer_parent::DoThing()
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));
	}
	

}

void AVNPlayer_parent::HandleCooldown(float deltaTime)
{
	if (!cooldownDone) {
		if (cooldown > 0.0f) {
			cooldown = cooldown - deltaTime;
			cooldownPercent = cooldown / cooldownMax;
		}
		else {
			cooldownDone = true;
			if (cooking == true) {
				foodReady = ServingFood;
				cooking = false;
			}
			if (drinkServing == true) {
				drinkReady = ServingDrink;
				drinkServing = false;
			}
			checkingOrder = true;
			
		}
	}

}

void AVNPlayer_parent::CookNoodle()
{
	cooking = true;
	switch (noodleType) {
		case 0: {
			if (sauceType == 1) {
				if (toppingType == 0) {
					//Seafood noodles!
					/*if (GEngine) {
						GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("SeafoodNoodle"));
					}*/
					ServingFood = 1;

				}
				else {
					//wrong recipe
					ServingFood = 7;
				}
			}
			else if (sauceType == 2) {
				if (toppingType == 1) {
					//Bacon noodles!
					ServingFood = 2;
				}
				else {
					ServingFood = 7;
				}
			}
			else {
				ServingFood = 7;
			}
		}
			  break;
		case 1: {
			if (sauceType == 0) {
				if (toppingType == 3) {
					//Pork Ramen
					ServingFood = 3;
				}
				else {
					ServingFood = 7;
				}
			}
			else if (sauceType == 2) {
				if (toppingType == 3) {
					//Shoyu Ramen
					ServingFood = 4;
				}
				else {
					ServingFood = 7;
				}
			}
			else {
				ServingFood = 7;
			}
		}
			  break;
		case 2: {
			if (sauceType == 2) {
				if (toppingType == 2) {
					//Soba
					ServingFood = 5;
				}
				else if (toppingType == 4) {
					//Yakisoba
					ServingFood = 6;
				}
				else {
					ServingFood = 7;
				}
			}
			else {
				ServingFood = 7;
			}
			
		}
			  break;
	}
}

void AVNPlayer_parent::ResetServed()
{
	ServingDrink = 0;
	ServingFood = 0;
	//servedDrink = 0;
	//servedFood = 0;
	foodReady = 0;
	drinkReady = 0;

}

void AVNPlayer_parent::AddCustomer(FString name_, int food_, int drink_)
{
	FCustomer_struct newCustomer;
	newCustomer.CustomerNum = customers.Num() + 1;
	newCustomer.name = name_;
	newCustomer.desiredFood = food_;
	newCustomer.desiredDrink = drink_;
	newCustomer.satisfactionLevel = 100.0f;

	customers.Add(newCustomer);

}

void AVNPlayer_parent::costMoney(float moneyToTakeOff)
{
	money = money - moneyToTakeOff;
}

void AVNPlayer_parent::getMoney(float moneyToGet)
{
	money = money + moneyToGet;
}




