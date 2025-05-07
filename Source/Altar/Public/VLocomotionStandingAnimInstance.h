#pragma once
#include "CoreMinimal.h"
#include "VLocomotion.h"
#include "VLocomotionCharacterAnimInstance.h"
#include "VSprinting.h"
#include "VLocomotionStandingAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVLocomotionStandingAnimInstance : public UVLocomotionCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVLocomotion AnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVSprinting SprintSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBowEquipped;
    
public:
    UVLocomotionStandingAnimInstance();

};

