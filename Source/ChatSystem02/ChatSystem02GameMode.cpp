// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChatSystem02GameMode.h"
#include "ChatSystem02Character.h"
#include "UObject/ConstructorHelpers.h"

AChatSystem02GameMode::AChatSystem02GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
