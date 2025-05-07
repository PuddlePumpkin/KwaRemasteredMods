#pragma once
#include "CoreMinimal.h"
#include "NiProperty.h"
#include "WireframeFlags.h"
#include "NiWireframeProperty.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiWireframeProperty : public UNiProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    WireframeFlags Flags;
    
    UNiWireframeProperty();

};

