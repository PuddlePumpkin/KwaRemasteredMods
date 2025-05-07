#pragma once
#include "CoreMinimal.h"
#include "LegacyAddedEffectItemProperties.h"
#include "ModernEffectItemData.h"
#include "VViewModelBase.h"
#include "VAddedEffectsListViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAddedEffectsListViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyAddedEffectItemProperties> AddedEffectsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernEffectItemData> ModernAddedItemEffectsList;
    
public:
    UVAddedEffectsListViewModel();

    UFUNCTION(BlueprintCallable)
    void SetModernAddedItemEffectsList(const TArray<FModernEffectItemData>& NewModernAddedItemEffectsList);
    
    UFUNCTION(BlueprintCallable)
    void SetAddedEffectsList(const TArray<FLegacyAddedEffectItemProperties>& NewAddedEffectsList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FModernEffectItemData> GetModernAddedItemEffectsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyAddedEffectItemProperties> GetAddedEffectsList() const;
    
};

