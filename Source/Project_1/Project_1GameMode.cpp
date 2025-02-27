// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_1GameMode.h"
#include "Project_1Character.h"
#include "UObject/ConstructorHelpers.h"

AProject_1GameMode::AProject_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
