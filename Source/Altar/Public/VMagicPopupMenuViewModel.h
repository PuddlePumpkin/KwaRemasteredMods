#pragma once
#include "CoreMinimal.h"
#include "LegacyMagicPopupEffectProperties.h"
#include "VViewModelBase.h"
#include "VMagicPopupMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVMagicPopupMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyMagicPopupEffectProperties> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Requires;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetYOffset;
    
public:
    UVMagicPopupMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetTargetYOffset(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRequires(const FText& NewRequiresText);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDisplayed(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEffects(const TArray<FLegacyMagicPopupEffectProperties>& NewEffectsProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetYOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRequires() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDisplayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyMagicPopupEffectProperties> GetEffects() const;
    
};

