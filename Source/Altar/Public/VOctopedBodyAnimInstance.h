#pragma once
#include "CoreMinimal.h"
#include "CreatureOctopedBoneAnimationData.h"
#include "VLowerUpperBodyAnimInstance.h"
#include "VOctopedBodyAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVOctopedBodyAnimInstance : public UVLowerUpperBodyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovingSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureOctopedBoneAnimationData LayeredBoneSettings;
    
public:
    UVOctopedBodyAnimInstance();

};

