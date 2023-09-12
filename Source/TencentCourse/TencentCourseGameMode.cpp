// Copyright Epic Games, Inc. All Rights Reserved.

#include "TencentCourseGameMode.h"
#include "TencentCourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATencentCourseGameMode::ATencentCourseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
