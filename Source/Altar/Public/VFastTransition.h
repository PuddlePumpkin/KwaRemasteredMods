#pragma once
#include "CoreMinimal.h"
#include "VFastTransitionBase.h"
#include "VFastTransition.generated.h"

class UVLevelStreaming;

UCLASS(Blueprintable)
class ALTAR_API UVFastTransition : public UVFastTransitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVLevelStreaming* InjectedAsParent;
    
public:
    UVFastTransition();

private:
    UFUNCTION(BlueprintCallable)
    void OnGoingToMainMenu();
    
};

