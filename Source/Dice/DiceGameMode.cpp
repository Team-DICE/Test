// Copyright Epic Games, Inc. All Rights Reserved.

#include "DiceGameMode.h"
#include "DiceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADiceGameMode::ADiceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
