// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerInfo.generated.h"

UCLASS()
class SHOOTERMAN_API APlayerInfo : public AActor
{
	GENERATED_BODY()
public:	
	APlayerInfo();

	UFUNCTION(BlueprintCallable)
	int GetPlayerLife() { return playerLife; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void UpdateLife(int _playerLife) { playerLife = _playerLife; }

private:
	int playerLife;

};
