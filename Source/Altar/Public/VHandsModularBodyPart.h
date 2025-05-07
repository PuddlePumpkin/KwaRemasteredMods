#pragma once
#include "CoreMinimal.h"
#include "VModularBodyPartBase.h"
#include "VHandsModularBodyPart.generated.h"

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVHandsModularBodyPart : public AVModularBodyPartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHideRings;
    
    AVHandsModularBodyPart(const FObjectInitializer& ObjectInitializer);

};

