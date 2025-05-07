#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "hkResponseType.h"
#include "bhkEntityCInfo.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UbhkEntityCInfo : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    hkResponseType CollisionResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessContactCallbackDelay;
    
    UbhkEntityCInfo();

};

