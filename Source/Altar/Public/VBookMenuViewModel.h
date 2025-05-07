#pragma once
#include "CoreMinimal.h"
#include "LegacyBookProperties.h"
#include "VViewModelBase.h"
#include "VBookMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVBookMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyBookProperties Properties;
    
public:
    UVBookMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyBookProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendTakeButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendCloseButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyBookProperties GetProperties() const;
    
};

