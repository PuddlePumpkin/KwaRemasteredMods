#pragma once
#include "CoreMinimal.h"
#include "VViewModelBase.h"
#include "VSpellMakingEnchantingViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVSpellMakingEnchantingViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagickaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMagickaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MagickaCostVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsConstantEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExceedingMaxMagickaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaxUsageVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GoldCostVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerGoldVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGoldCostIsExceedingPlayerGold;
    
public:
    UVSpellMakingEnchantingViewModel();

    UFUNCTION(BlueprintCallable)
    void SetPlayerGoldVisibility(bool NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerGold(int32 NewPlayerGold);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxUsageVisibility(bool NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxUsage(int32 NewMaxUsage);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxMagickaCost(int32 NewMaxMagickaCost);
    
    UFUNCTION(BlueprintCallable)
    void SetMagickaCostVisibility(bool NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetMagickaCost(int32 NewMagickaCost);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExceedingMaxMagickaCost(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsConstantEffect(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGoldCostVisibility(bool NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetGoldCostIsExceedingPlayerGold(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGoldCost(int32 NewGoldCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerGoldIsVisibile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MaxUsageIsVisibile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MagickaCostIsVisibile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExceedingMaxMagickaCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConstantEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GoldCostIsVisibile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GoldCostIsExceedingPlayerGold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerGold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxUsage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxMagickaCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMagickaCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGoldCost() const;
    
};

