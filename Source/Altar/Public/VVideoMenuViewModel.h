#pragma once
#include "CoreMinimal.h"
#include "ELegacyVideoMenuIDs.h"
#include "VViewModelBase.h"
#include "VVideoMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVVideoMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    UVVideoMenuViewModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ThisIsForPluginCompliance() const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedButton(ELegacyVideoMenuIDs InButtonIndex);
    
};

