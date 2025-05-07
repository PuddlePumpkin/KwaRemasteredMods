#pragma once
#include "CoreMinimal.h"
#include "VBowAttack.h"
#include "VLayerCharacterAnimInstance.h"
#include "VBowAttackAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBowAttackAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVBowAttack AnimSet;
    
public:
    UVBowAttackAnimInstance();

};

