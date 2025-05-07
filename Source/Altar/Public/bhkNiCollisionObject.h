#pragma once
#include "CoreMinimal.h"
#include "NiCollisionObject.h"
#include "bhkCOFlags.h"
#include "bhkNiCollisionObject.generated.h"

class UbhkWorldObject;

UCLASS(Blueprintable)
class ALTAR_API UbhkNiCollisionObject : public UNiCollisionObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    bhkCOFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkWorldObject* Body;
    
    UbhkNiCollisionObject();

};

