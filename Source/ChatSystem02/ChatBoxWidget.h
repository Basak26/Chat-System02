// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChatBoxWidget.generated.h"

/**
 * 
 */
UCLASS()
class CHATSYSTEM02_API UChatBoxWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UEditableText> EditableChatBox;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UScrollBox> ScrollBox;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	uint8 bIsFocus;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float ScrollMultiplier;

public:

	
};
