#pragma once
#include "CoreMinimal.h"
#include "VViewModelBase.h"
#include "VGamertagViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVGamertagViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    UVGamertagViewModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ThisIsForPluginCompliance() const;
    
};

