#pragma once
#include "CoreMinimal.h"
#include "NiAvObject.h"
#include "NiNode.generated.h"

class UNiDynamicEffect;

UCLASS(Blueprintable)
class ALTAR_API UNiNode : public UNiAvObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiAvObject*> Children;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiDynamicEffect*> Effects;
    
    UNiNode();

};

