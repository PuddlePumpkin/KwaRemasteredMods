#pragma once
#include "CoreMinimal.h"
#include "AltarQMPSubsytemInterface.h"
#include "GameplayTagContainer.h"
#include "QMPGameInstance.h"
#include "AltarSpecificQMPGameInstance.generated.h"

class UCommonActivatableWidget;
class USaveGame;
class UVAltarSaveGame;

UCLASS(Blueprintable)
class ALTARQMP_API UAltarSpecificQMPGameInstance : public UQMPGameInstance, public IAltarQMPSubsytemInterface {
    GENERATED_BODY()
public:
    UAltarSpecificQMPGameInstance();

private:
    UFUNCTION(BlueprintCallable)
    void OnUIFocusChange(const FGameplayTag& TopMostLayer, UCommonActivatableWidget* TopMostWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveSlotLoaded_Delegate(USaveGame* GenericSave, const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    void OnAsyncSaveComplete_Delegate(const UVAltarSaveGame* SaveGame);
    

    // Fix for true pure virtual functions not being implemented
};

