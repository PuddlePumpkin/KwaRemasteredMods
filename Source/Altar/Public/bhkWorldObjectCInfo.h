#pragma once
#include "CoreMinimal.h"
#include "BroadPhaseType.h"
#include "NifType.h"
#include "bhkWorldObjectCInfo.generated.h"

class UbhkWorldObjCInfoProperty;

UCLASS(Blueprintable)
class ALTAR_API UbhkWorldObjectCInfo : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    BroadPhaseType BroadPhaseTypeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkWorldObjCInfoProperty* Property;
    
    UbhkWorldObjectCInfo();

};

