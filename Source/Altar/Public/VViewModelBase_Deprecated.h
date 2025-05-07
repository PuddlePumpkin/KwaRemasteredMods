#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VViewModelBase_Deprecated.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVViewModelBase_Deprecated : public UObject {
    GENERATED_BODY()
public:
    UVViewModelBase_Deprecated();

protected:
    UFUNCTION(BlueprintCallable)
    void RegisterDelegates();
    
};

