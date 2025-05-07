#pragma once
#include "CoreMinimal.h"
#include "NiAvObject.h"
#include "NiDynamicEffect.generated.h"

class UNiNode;

UCLASS(Blueprintable)
class ALTAR_API UNiDynamicEffect : public UNiAvObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwitchState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumAffectedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiNode*> AffectedNodes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> AffectedNodePointers;
    
    UNiDynamicEffect();

};

