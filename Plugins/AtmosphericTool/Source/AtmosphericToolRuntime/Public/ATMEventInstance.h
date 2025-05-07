#pragma once
#include "CoreMinimal.h"
#include "ATMPresetInstance.h"
#include "ATMEventInstance.generated.h"

class UATMEventPreset;

UCLASS(Blueprintable)
class ATMOSPHERICTOOLRUNTIME_API UATMEventInstance : public UATMPresetInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMEventPreset* Preset;
    
    UATMEventInstance();

};

