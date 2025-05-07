#pragma once
#include "CoreMinimal.h"
#include "VModularBodyPartBase.h"
#include "VFeetModularBodyPart.generated.h"

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVFeetModularBodyPart : public AVModularBodyPartBase {
    GENERATED_BODY()
public:
    AVFeetModularBodyPart(const FObjectInitializer& ObjectInitializer);

};

