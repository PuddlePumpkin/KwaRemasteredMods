#pragma once
#include "CoreMinimal.h"
#include "TESForm.h"
#include "TESWeather.generated.h"

class UATMEventPreset;

UCLASS(Blueprintable)
class ALTAR_API UTESWeather : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMEventPreset* Preset;
    
    UTESWeather();

};

