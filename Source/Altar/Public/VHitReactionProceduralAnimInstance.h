#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "HitReactionData.h"
#include "VHitReactEvent.h"
#include "VHitReactionAnimInstance.h"
#include "VHitReactionProceduralAnimInstance.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVHitReactionProceduralAnimInstance : public UVHitReactionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitReactionData LayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RestrictedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitReactProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadPhysicsBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionPhysicsBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RecoveryCurve;
    
public:
    UVHitReactionProceduralAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnPhysicsSimulationStop();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnPhysicsSimulationStart();
    
    UFUNCTION(BlueprintCallable)
    void OnHitReaction(const FVHitReactEvent& HitReactEvent);
    
    UFUNCTION(BlueprintCallable)
    void InitHitReaction(const FName HitBoneName, const FVector HitDirection, bool bIsArrow, bool bIsPowerAttack, bool bIsSpell);
    
};

