#pragma once
#include "CoreMinimal.h"
#include "DeathAnimationData.h"
#include "VLayerCharacterAnimInstance.h"
#include "VDeathCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVDeathCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathAnimationData AnimSet;
    
public:
    UVDeathCharacterAnimInstance();

};

