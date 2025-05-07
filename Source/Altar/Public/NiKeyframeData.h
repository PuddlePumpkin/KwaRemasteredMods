#pragma once
#include "CoreMinimal.h"
#include "KeyType.h"
#include "NiObject.h"
#include "NiKeyframeData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiKeyframeData : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumRotationKeys;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    KeyType RotationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Order;
    
    UNiKeyframeData();

};

