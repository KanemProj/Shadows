// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShadowsGameMode.h"
#include "ShadowsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShadowsGameMode::AShadowsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
