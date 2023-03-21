#pragma once

#include "CoreMinimal.h"
#include "CompositingElements/CompositingElementPasses.h"

#include "Widgets/SVirtualWindow.h"

#include "OWLUIInputPass.generated.h"

class FWidgetRenderer;

UCLASS(Blueprintable)
class OWLCOMPOSURE_API UOWLUIInputPass : public UCompositingElementInput
{
	GENERATED_BODY()
	UOWLUIInputPass();
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	TSubclassOf<class UUserWidget> WidgetType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	FIntPoint RenderResolution = {1920,1080};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	FLinearColor ClearColour = FLinearColor(FVector4f(0,0,0,0));

	UPROPERTY()
	UUserWidget* WidgetToRender = nullptr;

	virtual UTexture* GenerateInput_Implementation() override;
	virtual void BeginDestroy() override;

public:
	UFUNCTION(BlueprintCallable, Category="UI")
	UUserWidget* GetWidget();


private:
	void InitWidgetRenderer();
	void ReleaseWidgetRenderer();

	FDateTime LastRender;
	bool bFirstCall = true;

	FWidgetRenderer* WidgetRenderer = nullptr;
	TSharedPtr<SVirtualWindow> Window;
};
