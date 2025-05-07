#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EVAltarAchievement.h"
#include "VAltarAchievementBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UVAltarAchievementBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAltarAchievementBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UndoAchievement(EVAltarAchievement Achievement);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerAchievement(EVAltarAchievement Achievement);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAchievements();
    
};

