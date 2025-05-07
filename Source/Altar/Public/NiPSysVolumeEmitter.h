#pragma once
#include "CoreMinimal.h"
#include "NiPSysEmitter.h"
#include "NiPSysVolumeEmitter.generated.h"

class UNiNode;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysVolumeEmitter : public UNiPSysEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiNode* EmitterObject;
    
    UNiPSysVolumeEmitter();

};

