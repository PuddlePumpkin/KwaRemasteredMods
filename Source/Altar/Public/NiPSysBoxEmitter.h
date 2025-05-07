#pragma once
#include "CoreMinimal.h"
#include "NiPSysVolumeEmitter.h"
#include "NiPSysBoxEmitter.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiPSysBoxEmitter : public UNiPSysVolumeEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmitterWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmitterHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmitterDepth;
    
    UNiPSysBoxEmitter();

};

