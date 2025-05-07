#pragma once
#include "CoreMinimal.h"
#include "VModularBodyPartBase.h"
#include "VLowerBodyModularBodyPart.generated.h"

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVLowerBodyModularBodyPart : public AVModularBodyPartBase {
    GENERATED_BODY()
public:
    AVLowerBodyModularBodyPart(const FObjectInitializer& ObjectInitializer);

};

