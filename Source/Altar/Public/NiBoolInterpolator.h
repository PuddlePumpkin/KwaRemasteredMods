#pragma once
#include "CoreMinimal.h"
#include "NiKeyBasedInterpolator.h"
#include "NiBoolInterpolator.generated.h"

class UNiBoolData;

UCLASS(Blueprintable)
class ALTAR_API UNiBoolInterpolator : public UNiKeyBasedInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiBoolData* Data;
    
    UNiBoolInterpolator();

};

