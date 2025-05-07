#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CharacterLayerLinkTable.h"
#include "CharacterPropertyLinkTable.h"
#include "ConversationIdleData.h"
#include "ShieldHandPoseSetup.h"
#include "Templates/SubclassOf.h"
#include "TorchAnimationData.h"
#include "VBaseCharacterAnimInstance.h"
#include "VHorseRiderLocomotionJump.h"
#include "VHorseRiderLocomotionStanding.h"
#include "VHorseRiderLocomotionSwim.h"
#include "VSpecialIdleAndDockData.h"
#include "VMainCharacterAnimInstance.generated.h"

class UAnimInstance;
class UAnimSequenceBase;
class UVPawnAnimatedAction;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVMainCharacterAnimInstance : public UVBaseCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSwim;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterPropertyLinkTable> PropertyLinkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterPropertyLinkTable> DynamicPropertyLinkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCharacterLayerLinkTable> AttackingLayerLinkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterPropertyLinkTable> LocomotionLinkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPropertyLinkTable EquipUnequipLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttackingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EquipUnequipTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlowestMovingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FastestMovingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStaggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDodgingRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanExitBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanExitAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackingRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipUnequipRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCastingRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecoilingRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingFullBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWeaponDrawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> SpecialAndDynamicIdleAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> TorchAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> ShieldHandPoseAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> ConversationIdleAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> SpellCastAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> BlockAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> RecoilAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> StaggerAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> DodgeAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> GetUpAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> InAirAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> HorseRiderGroundAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> HorseRiderInAirAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> HorseRiderSwimAnimLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpecialIdleUpperBodyBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpecialIdleUpperBodyBlendDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVSpecialIdleAndDockData SpecialIdleAndDockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTorchAnimationData TorchAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldHandPoseSetup ShieldHandPoseSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationIdleData ConversationAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPropertyLinkTable SpellCastLayerPropertyLinkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPropertyLinkTable BlockLayerPropertyLinkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPropertyLinkTable RecoilLayerPropertyLinkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPropertyLinkTable StaggerLayerPropertyLinkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPropertyLinkTable DodgeLayerPropertyLinkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPropertyLinkTable GetUpLayerPropertyLinkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPropertyLinkTable InAirLayerPropertyLinkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVHorseRiderLocomotionStanding HorseRiderGroundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVHorseRiderLocomotionSwim HorseRiderSwimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVHorseRiderLocomotionJump HorseRiderJumpData;
    
public:
    UVMainCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLocomotionLinkTableStateNode(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLocomotionLinkTable();
    
    UFUNCTION(BlueprintCallable)
    UAnimInstance* TryToLinkLayerAndUpdateLinkTable(const TSubclassOf<UAnimInstance> AnimLayerClass, FCharacterPropertyLinkTable& InPropertyLinkTable);
    
    UFUNCTION(BlueprintCallable)
    UAnimInstance* TryToLinkLayer(const TSubclassOf<UAnimInstance> AnimLayerClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void StateMachineActionRequest(UVPawnAnimatedAction* Action);
    
    UFUNCTION(BlueprintCallable)
    void SpecialIdleAnimationStart(UAnimSequenceBase* AnimationAsset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPropertyLinkTable(const TArray<FCharacterPropertyLinkTable>& InPropertyLinkTable);
    
    UFUNCTION(BlueprintCallable)
    void SetLocomotionLinkTable(const TArray<FCharacterPropertyLinkTable>& InLocomotionLinkTable);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateFullyBlendedIn(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateExit(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateComplete(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
private:
    UFUNCTION(BlueprintCallable)
    void LinkDynamicAnimLayersRequest();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponDrawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStanding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaggered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSneaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResurrecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecoiling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnHorse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrabbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDodging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlocking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyActionRequest(const FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActionRequestWithIndex(FGameplayTag ActionTag, int32 AnimIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActionRequest(FGameplayTag ActionTag) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DockingTransitionUpdated(bool bIsUndockingTransition);
    
};

