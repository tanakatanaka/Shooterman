// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootermanGameMode.h"
#include "ShootermanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootermanGameMode::AShootermanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
