// Fill out your copyright notice in the Description page of Project Settings.


#include "EditorDialog.h"
#include "FloatValue.h"
#include "Components/VerticalBox.h"
#include "Components/TextBlock.h"
#include "Components/SpinBox.h"

void UEditorDialog::Fill(TArray<FString> labels, TArray<float> values)
{
	for (int i = 0; i < labels.Num() && i < values.Num(); i++)
	{
		UFloatValue* ed = DuplicateObject<UFloatValue>(FloatValueTemplate, Container);
		ed->Label->SetText(FText::FromString(labels[i]));
		ed->SpinBox->SetValue(values[i]);
		Container->AddChild(ed);
	}
	FloatValueTemplate->SetVisibility(ESlateVisibility::Hidden);
}
