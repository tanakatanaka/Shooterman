// Fill out your copyright notice in the Description page of Project Settings.


#include "BedActor.h"

// Sets default values
ABedActor::ABedActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABedActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABedActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

