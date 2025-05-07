#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ELegacyLockpickMenuDifficulty.h"
#include "LegacyLockpickMenuProperties.h"
#include "LegacyLockpickMenuTumblerDefaultProperties.h"
#include "LegacyLockpickMenuTumblerProperties.h"
#include "VAltarMenu.h"
#include "VLegacyLockpickMenu.generated.h"

class UCommonActivatableWidget;
class UCurveTable;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyLockpickMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* DifficultyCurveTable;
    
public:
    UVLegacyLockpickMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void SetDifficultyCurve(ELegacyLockpickMenuDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTumberMovementInitialised(int32 TumblerIndex, const FLegacyLockpickMenuTumblerProperties& TumbleProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuFocusChanged(bool IsFocussed);
    
    UFUNCTION(BlueprintCallable)
    void InitialiseTumblerMovement(int32 TumblerIndex, const FLegacyLockpickMenuTumblerDefaultProperties& TumblerDefaultProperties, const FLegacyLockpickMenuProperties& MenuProperties);
    
    UFUNCTION(BlueprintCallable)
    void CheckMenuFocus(const FGameplayTag& TopMostLayer, UCommonActivatableWidget* TopMostWidget);
    
};

