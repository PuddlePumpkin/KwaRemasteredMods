#pragma once
#include "CoreMinimal.h"
#include "VLayerCharacterAnimInstance.h"
#include "VHumanoidTailPhysicsAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVHumanoidTailPhysicsAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSimulatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TailPhysicsAlpha;
    
public:
    UVHumanoidTailPhysicsAnimInstance();

};

