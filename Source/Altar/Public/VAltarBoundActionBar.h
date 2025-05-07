#pragma once
#include "CoreMinimal.h"
#include "Input/CommonBoundActionBar.h"
#include "OnAcceptedWidgetChangeDelegate.h"
#include "VAltarBoundActionBar.generated.h"

class UInputAction;
class UVAltarBoundActionButton;

UCLASS(Blueprintable)
class ALTAR_API UVAltarBoundActionBar : public UCommonBoundActionBar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAcceptedWidgetChange OnAcceptedWidgetChange;
    
    UVAltarBoundActionBar();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVAltarBoundActionButton* GetActionWidget(UInputAction* InputAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVAltarBoundActionButton* GetAcceptedActionWidget() const;
    
};

