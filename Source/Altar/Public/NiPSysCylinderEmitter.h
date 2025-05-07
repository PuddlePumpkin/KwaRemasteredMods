#pragma once
#include "CoreMinimal.h"
#include "NiPSysVolumeEmitter.h"
#include "NiPSysCylinderEmitter.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiPSysCylinderEmitter : public UNiPSysVolumeEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmitterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmitterHeight;
    
    UNiPSysCylinderEmitter();

};

