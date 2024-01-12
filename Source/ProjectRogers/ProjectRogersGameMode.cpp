// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectRogersGameMode.h"
#include "ProjectRogersCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectRogersGameMode::AProjectRogersGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
