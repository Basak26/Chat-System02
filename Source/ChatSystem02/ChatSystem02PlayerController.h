// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ChatComponent.h"
#include "ChatSystem02PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CHATSYSTEM02_API AChatSystem02PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AChatSystem02PlayerController();

private:
	UChatComponent* ChatComponent;

};
