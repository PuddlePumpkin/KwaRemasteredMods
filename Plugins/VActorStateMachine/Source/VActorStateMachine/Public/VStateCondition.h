#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VStateCondition.generated.h"

class UVStateBase;

UCLASS(Blueprintable, EditInlineNew)
class VACTORSTATEMACHINE_API UVStateCondition : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UVStateCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInit(UVStateBase* OwnerState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckCondition(UVStateBase* CurrentState);
    
};

