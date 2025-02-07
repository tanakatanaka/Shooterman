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
	void SetupPlayerInfo(int _life, int _maxLife);

	UFUNCTION(BlueprintCallable)
	void SetupDefuseTime(float _defuseTime);


	UFUNCTION(BlueprintCallable)
	int GetPlayerLife() { return playerLife; }

	UFUNCTION(BlueprintCallable)
	int GetMaxPlayerLife() { return playerMaxLife; }

	UFUNCTION(BlueprintCallable)
	int GetLifePercent() { return  playerLife / playerMaxLife; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void UpdateLife(int _playerLife) { playerLife = _playerLife; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void UpdateMaxLife(int _playerMaxLife) { playerMaxLife = _playerMaxLife; }

	UFUNCTION(BlueprintCallable)
	bool IsFuelTime(float deltatime);

private:
	bool isSetupEnd;
	float defuseTime;
	int playerLife;
	int playerMaxLife;
	float startTime;
	float totalTime;
};
