#pragma once
#include "CoreMinimal.h"
#include "CreatureBipedBoneAnimationData.h"
#include "VLowerUpperBodyAnimInstance.h"
#include "VBipedLowerUpperBodyAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBipedLowerUpperBodyAnimInstance : public UVLowerUpperBodyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureBipedBoneAnimationData LayerData;
    
public:
    UVBipedLowerUpperBodyAnimInstance();

};

