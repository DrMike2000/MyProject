// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FloatValue.generated.h"

/**
 *
 */
UCLASS()
class MYPROJECT_API UFloatValue : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* Label;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class USpinBox* SpinBox;
};
