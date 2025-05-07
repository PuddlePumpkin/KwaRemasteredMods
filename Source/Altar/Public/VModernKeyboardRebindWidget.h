#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "VModernRebindSettingWidget.h"
#include "VModernKeyboardRebindWidget.generated.h"

class UVAltarNavigableInputKeySelector;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernKeyboardRebindWidget : public UVModernRebindSettingWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarNavigableInputKeySelector* PrimaryKeyboardKeySelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarNavigableInputKeySelector* SecondaryKeyboardKeySelector;
    
public:
    UVModernKeyboardRebindWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnSecondaryKeyboardKeySelectorKeySelected(FInputChord NewInputChord);
    
    UFUNCTION(BlueprintCallable)
    void OnSecondaryKeyboardKeySelectorKeyChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryKeyboardKeySelectorKeySelected(FInputChord NewInputChord);
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryKeyboardKeySelectorKeyChanged();
    
};

