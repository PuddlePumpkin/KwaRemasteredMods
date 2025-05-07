#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NiCollisionObject.generated.h"

class UNiAvObject;

UCLASS(Blueprintable)
class ALTAR_API UNiCollisionObject : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiAvObject* Target;
    
    UNiCollisionObject();

};

