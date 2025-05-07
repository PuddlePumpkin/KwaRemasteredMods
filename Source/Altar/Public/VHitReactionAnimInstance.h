#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHitReactionState.h"
#include "VLayerCharacterAnimInstance.h"
#include "VHitReactionAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVHitReactionAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitReactionState HitReactionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDirectionSnapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardDeadZone;
    
public:
    UVHitReactionAnimInstance();

};

