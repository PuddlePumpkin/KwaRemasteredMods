#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NiPSysEmitterCtlrData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiPSysEmitterCtlrData : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumActiveKeys;
    
    UNiPSysEmitterCtlrData();

};

