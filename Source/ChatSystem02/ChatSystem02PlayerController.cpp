// Fill out your copyright notice in the Description page of Project Settings.


#include "ChatSystem02PlayerController.h"

AChatSystem02PlayerController::AChatSystem02PlayerController()
{
	ChatComponent = CreateDefaultSubobject<UChatComponent>(TEXT("ChatComponent"));
}
