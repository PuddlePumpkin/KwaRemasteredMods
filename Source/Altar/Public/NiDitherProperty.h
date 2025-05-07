#pragma once
#include "CoreMinimal.h"
#include "EDitherFlags.h"
#include "NiProperty.h"
#include "NiDitherProperty.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiDitherProperty : public UNiProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDitherFlags DitherFlags;
    
    UNiDitherProperty();

};

