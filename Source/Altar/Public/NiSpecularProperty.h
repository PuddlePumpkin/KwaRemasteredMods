#pragma once
#include "CoreMinimal.h"
#include "NiProperty.h"
#include "SpecularFlags.h"
#include "NiSpecularProperty.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiSpecularProperty : public UNiProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    SpecularFlags Flags;
    
    UNiSpecularProperty();

};

