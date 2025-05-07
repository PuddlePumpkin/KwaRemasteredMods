#pragma once
#include "CoreMinimal.h"
#include "ATMPreset.h"
#include "ATMEventPreset.generated.h"

UCLASS(Blueprintable)
class ATMOSPHERICTOOLRUNTIME_API UATMEventPreset : public UATMPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UATMEventPreset();

};

