#pragma once
#include "CoreMinimal.h"
#include "VViewModelBase.h"
#include "VHUDBreathViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVHUDBreathViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreathPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBreathBarBlinking;
    
public:
    UVHUDBreathViewModel();

    UFUNCTION(BlueprintCallable)
    void SetBreathPercentage(const float& NewBreathPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBreathBarBlinking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBreathPercentage() const;
    
};

