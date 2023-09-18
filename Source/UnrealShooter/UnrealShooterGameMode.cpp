// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealShooterGameMode.h"
#include "UnrealShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealShooterGameMode::AUnrealShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
