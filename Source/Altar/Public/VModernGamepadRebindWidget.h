#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "VModernRebindSettingWidget.h"
#include "VModernGamepadRebindWidget.generated.h"

class UVAltarNavigableInputKeySelector;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernGamepadRebindWidget : public UVModernRebindSettingWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarNavigableInputKeySelector* GamepadKeySelector;
    
public:
    UVModernGamepadRebindWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnGamepadKeySelectorKeySelected(FInputChord NewInputChord);
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadKeySelectorKeyChanged();
    
};

