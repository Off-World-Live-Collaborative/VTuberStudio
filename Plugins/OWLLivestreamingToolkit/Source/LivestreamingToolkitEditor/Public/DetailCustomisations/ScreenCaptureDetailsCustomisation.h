// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SWidget.h"
#include "Widgets/Input/SComboBox.h"
#include "IDetailCustomization.h"
#include "OWLScreenCapture.h"

class IDetailChildrenBuilder;
class IDetailLayoutBuilder;
class IPropertyHandle;

class FScreenCaptureDetailsCustomisation : public IDetailCustomization
{
public:
	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
	static TSharedRef<IDetailCustomization> MakeInstance();

	/** IDetailCustomization interface */
	virtual void CustomizeDetails( IDetailLayoutBuilder& DetailBuilder ) override;
	FText GetSelectedNameComboBoxContent(TSharedPtr<IPropertyHandle> NameProperty) const;

private:
	TSharedPtr<IPropertyHandle> CaptureTypeProperty;

	void OnInfoSelectionChanged(TSharedPtr<FString> SelectedItem, ESelectInfo::Type SelectInfo, TSharedPtr<IPropertyHandle> NameProperty);
	TSharedRef<SWidget> MakeItemWidget(TSharedPtr<FString> StringItem);
	void OnCaptureTypeChanged();
	EVisibility GetDropdownVisibility(EOWLScreenCaptureType BuildType) const;
	EOWLScreenCaptureType CaptureType = EOWLScreenCaptureType::SCT_Monitor;

	void BuildCaptureType(IDetailLayoutBuilder& DetailBuilder, EOWLScreenCaptureType BuildType);

	TArray<TSharedPtr<FString>> MonitorOptionList;
	TArray<TSharedPtr<FString>> WindowOptionList;
	TArray<TSharedPtr<FString>> EmptyOptionList;
	const TArray<TSharedPtr<FString>>& GetOptionList(EOWLScreenCaptureType BuildType) const;
	TSharedPtr<IPropertyHandle> GetNameProperty(IDetailLayoutBuilder& DetailBuilder, EOWLScreenCaptureType BuildType);
	TSharedPtr<FString>* GetSelectedOption(FString SelectedName, EOWLScreenCaptureType BuildType);
	void FillOptionList(EOWLScreenCaptureType BuildType);
	FText GetSearchString(EOWLScreenCaptureType BuildType);
	FString SetSelectedName(EOWLScreenCaptureType BuildType, TSharedPtr<IPropertyHandle> NameProperty);
};
