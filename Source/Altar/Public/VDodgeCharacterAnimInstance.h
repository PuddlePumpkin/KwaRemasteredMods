#pragma once
#include "CoreMinimal.h"
#include "DodgeAnimationData.h"
#include "VLayerCharacterAnimInstance.h"
#include "VDodgeCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVDodgeCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDodgeAnimationData AnimSet;
    
    UVDodgeCharacterAnimInstance();

};

