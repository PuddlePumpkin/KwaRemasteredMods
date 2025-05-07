#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VVFXBlueprint.h"
#include "VStatusEffectVFXBlueprint.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API AVStatusEffectVFXBlueprint : public AVVFXBlueprint {
    GENERATED_BODY()
public:
    AVStatusEffectVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopPlayBody();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlayStatic(UStaticMeshComponent* StaticMeshComponent, bool bDoesBeginInFirstPerson, float Value, const TArray<FLinearColor>& VFXColors, bool bDoesBeginAsTheOnlyVFX, bool bIsEnchant, bool bIsMainEffect, bool bIsInInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlaySkeletal(USkeletalMeshComponent* SkeletalMeshComponent, bool bDoesBeginInFirstPerson, float Value, const TArray<FLinearColor>& VFXColors, bool bDoesBeginAsTheOnlyVFX, bool bIsEnchant, bool bIsMainEffect, bool bIsInInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlayBody(bool bDoesBeginInFirstPerson, float Value, const TArray<FLinearColor>& VFXColors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnchantTrailStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnchantTrailStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePerfomances(bool bIsTheOnlyVFX, bool bIsMainEffect);
    
};

