// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EditorDialog.generated.h"

/**
 *
 */
UCLASS()
class MYPROJECT_API UEditorDialog : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UVerticalBox* Container;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UFloatValue* FloatValueTemplate;

	UFUNCTION(BLueprintCallable)
		void Fill(TArray<FString> labels, TArray<float> values);

	
};
