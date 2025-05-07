#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ATMBiomeInfluencer.h"
#include "ATMBiomeConstant.generated.h"

class UATMBiomePreset;

UCLASS(Blueprintable)
class ATMOSPHERICTOOLRUNTIME_API UATMBiomeConstant : public UObject, public IATMBiomeInfluencer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UATMBiomePreset*, float> PresetWeights;
    
public:
    UATMBiomeConstant();


    // Fix for true pure virtual functions not being implemented
};

