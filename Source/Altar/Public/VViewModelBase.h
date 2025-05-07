#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "VViewModelBase.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVViewModelBase : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UVViewModelBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGamertagText() const;
    
};

