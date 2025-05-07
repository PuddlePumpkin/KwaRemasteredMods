#pragma once
#include "CoreMinimal.h"
#include "AlphaFlags.h"
#include "NiProperty.h"
#include "NiAlphaProperty.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiAlphaProperty : public UNiProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Threshold;
    
    UNiAlphaProperty();

};

