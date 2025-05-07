#pragma once
#include "CoreMinimal.h"
#include "VModularBodyPartBase.h"
#include "VRingModularBodyPart.generated.h"

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVRingModularBodyPart : public AVModularBodyPartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThirdPersonRightRingSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThirdPersonLeftRingSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstPersonRightRingSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstPersonLeftRingSocketName;
    
    AVRingModularBodyPart(const FObjectInitializer& ObjectInitializer);

};

