// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterManager.h"

// Sets default values
AShooterManager::AShooterManager()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShooterManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShooterManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShooterManager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

