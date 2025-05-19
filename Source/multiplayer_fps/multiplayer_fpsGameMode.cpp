// Copyright Epic Games, Inc. All Rights Reserved.

#include "multiplayer_fpsGameMode.h"
#include "multiplayer_fpsCharacter.h"
#include "UObject/ConstructorHelpers.h"

Amultiplayer_fpsGameMode::Amultiplayer_fpsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
