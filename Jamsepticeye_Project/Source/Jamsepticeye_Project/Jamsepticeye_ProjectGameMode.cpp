// Copyright Epic Games, Inc. All Rights Reserved.

#include "Jamsepticeye_ProjectGameMode.h"
#include "Jamsepticeye_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJamsepticeye_ProjectGameMode::AJamsepticeye_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
