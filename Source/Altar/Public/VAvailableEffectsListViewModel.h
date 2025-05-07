#pragma once
#include "CoreMinimal.h"
#include "AvailableEffectData.h"
#include "VViewModelBase.h"
#include "VAvailableEffectsListViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAvailableEffectsListViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAvailableEffectData> AvailableEffects;
    
public:
    UVAvailableEffectsListViewModel();

    UFUNCTION(BlueprintCallable)
    void SetAvailableEffects(const TArray<FAvailableEffectData>& NewAvailableEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAvailableEffectData> GetAvailableEffects() const;
    
};

