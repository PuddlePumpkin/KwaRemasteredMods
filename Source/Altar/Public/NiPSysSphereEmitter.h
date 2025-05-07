#pragma once
#include "CoreMinimal.h"
#include "NiPSysVolumeEmitter.h"
#include "NiPSysSphereEmitter.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiPSysSphereEmitter : public UNiPSysVolumeEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmitterRadius;
    
    UNiPSysSphereEmitter();

};

