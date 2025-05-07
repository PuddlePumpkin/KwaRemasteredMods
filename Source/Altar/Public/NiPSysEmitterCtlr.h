#pragma once
#include "CoreMinimal.h"
#include "NiPSysModifierCtlr.h"
#include "NiPSysEmitterCtlr.generated.h"

class UNiInterpolator;
class UNiPSysEmitterCtlrData;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysEmitterCtlr : public UNiPSysModifierCtlr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiPSysEmitterCtlrData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiInterpolator* VisibilityInterpolator;
    
    UNiPSysEmitterCtlr();

};

