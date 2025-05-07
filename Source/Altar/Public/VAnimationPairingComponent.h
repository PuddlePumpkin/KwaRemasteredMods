#pragma once
#include "CoreMinimal.h"
#include "OblivionSourcedCharacterAnimationState.h"
#include "OnAnimationSkipDelegateDelegate.h"
#include "OnAnimationStateChangeDelegateDelegate.h"
#include "OnDynamicAnimationChangeDelegate.h"
#include "OnEquippedWeaponChangeDelegate.h"
#include "OnSpecialAnimationStartDelegate.h"
#include "OnSpecialAnimationStopDelegate.h"
#include "OnSpecialAnimation_WantToMoveDelegate.h"
#include "VActorPairingComponent.h"
#include "VAnimationPairingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVAnimationPairingComponent : public UVActorPairingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationStateChangeDelegate OnAnimationStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationSkipDelegate OnAnimationSkip;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpecialAnimationStart OnSpecialIdleAnimationStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpecialAnimationStop OnSpecialIdleAnimationStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpecialAnimation_WantToMove OnSpecialIdleAnimation_WantToMove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDynamicAnimationChange OnDynamicIdleAnimationChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquippedWeaponChange OnEquippedWeaponChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPerformSpecialIdles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOblivionSourcedCharacterAnimationState LatestOblivionCharacterAnimationState;
    
public:
    UVAnimationPairingComponent(const FObjectInitializer& ObjectInitializer);

};

