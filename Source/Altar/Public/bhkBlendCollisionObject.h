#pragma once
#include "CoreMinimal.h"
#include "bhkCollisionObject.h"
#include "bhkBlendCollisionObject.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UbhkBlendCollisionObject : public UbhkCollisionObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeirGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelGain;
    
    UbhkBlendCollisionObject();

};

