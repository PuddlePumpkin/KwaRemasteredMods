#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VStateParameters.generated.h"

class UVStateBase;

UCLASS(Blueprintable, EditInlineNew)
class VACTORSTATEMACHINE_API UVStateParameters : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UVStateParameters();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Remove(UVStateBase* CurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Apply(UVStateBase* CurrentState);
    
};

