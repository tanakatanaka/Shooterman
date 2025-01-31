// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInfo.h"

// Sets default values
APlayerInfo::APlayerInfo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	playerLife = 100;
	playerMaxLife = 100;

}

void APlayerInfo::SetupPlayerInfo(int _life, int _maxLife)
{
	playerLife = _life;
	playerMaxLife = _maxLife;
}


