#pragma once
#include "CoreMinimal.h"
#include "NegotiateMenuInitializationData.h"
#include "VViewModelBase.h"
#include "VNegotiateMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVNegotiateMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNegotiateMenuInitializationData InitializationData;
    
public:
    UVNegotiateMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void RegisterSendConfirmHaggleHandler(int32 HagglePercentValue);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedCancelHandler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNegotiateMenuInitializationData GetInitializationData() const;
    
};

