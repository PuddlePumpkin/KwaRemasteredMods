#pragma once
#include "CoreMinimal.h"
#include "ELegacyLockpickMenuDifficulty.h"
#include "LegacyLockpickMenuProperties.h"
#include "LegacyLockpickMenuTumblerDefaultProperties.h"
#include "ModernLockpickMenuTumblerProperties.h"
#include "VAltarMenu.h"
#include "VModernLockpickMenu.generated.h"

class UCurveTable;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernLockpickMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* DifficultyCurveTable;
    
public:
    UVModernLockpickMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void SetDifficultyCurve(ELegacyLockpickMenuDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTumberMovementInitialised(int32 TumblerIndex, const FModernLockpickMenuTumblerProperties& TumbleProperties);
    
    UFUNCTION(BlueprintCallable)
    void InitialiseTumblerMovement(int32 TumblerIndex, const FLegacyLockpickMenuTumblerDefaultProperties& TumblerDefaultProperties, const FLegacyLockpickMenuProperties& MenuProperties);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTumblersToReset(int32 SecuritySkillLevel);
    
};

