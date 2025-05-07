#pragma once
#include "CoreMinimal.h"
#include "ATMPresetInstance.h"
#include "ATMBiomeInstance.generated.h"

class UATMBiomePreset;
class UObject;

UCLASS(Blueprintable)
class ATMOSPHERICTOOLRUNTIME_API UATMBiomeInstance : public UATMPresetInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMBiomePreset* Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> Influencers;
    
public:
    UATMBiomeInstance();

};

