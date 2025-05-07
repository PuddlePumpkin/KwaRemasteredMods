#pragma once
#include "CoreMinimal.h"
#include "VStateBase.h"
#include "VState.generated.h"

UCLASS(Blueprintable)
class VACTORSTATEMACHINE_API UVState : public UVStateBase {
    GENERATED_BODY()
public:
    UVState();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateUpdate(float DeltaTime);
    
};

