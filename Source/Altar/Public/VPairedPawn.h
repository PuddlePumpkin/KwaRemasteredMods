#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Animation/PoseSnapshot.h"
#include "Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EGroundMaterialType.h"
#include "EOblivionAnimGroup.h"
#include "EVActionType.h"
#include "EVActorValues.h"
#include "EVAnimAction.h"
#include "EVAnimGroup.h"
#include "EVAnimGroupAction.h"
#include "EVAnimGroupSection.h"
#include "EVConstrainingMode.h"
#include "EVLifeState.h"
#include "EVOblivionAIProcedureType.h"
#include "EVRagdollSetup.h"
#include "EVSkinType.h"
#include "OnAnimatedActionStartedDelegateDelegate.h"
#include "OnEnterLowFatigueStateDelegate.h"
#include "OnExitLowFatigueStateDelegate.h"
#include "OnRequestLinkDynamicAnimLayersDelegate.h"
#include "OnTextureEffectResetDelegate.h"
#include "OnTextureEffectStartDelegate.h"
#include "OnTextureEffectStopDelegate.h"
#include "PairedOblivionHitEvent.h"
#include "ReactToFreezeInterface.h"
#include "VAudioPlayable.h"
#include "VBufferedInputTag.h"
#include "VModdableBlueprintInterface.h"
#include "VMovementInputThresholds.h"
#include "VPawnKnockdownRequest.h"
#include "VPerceptionState.h"
#include "VPhysicsControllable.h"
#include "VPhysicsSimulationStartDelegateDelegate.h"
#include "VPhysicsSimulationStopDelegateDelegate.h"
#include "VTransformPairable.h"
#include "VPairedPawn.generated.h"

class AActor;
class AVPairedPawn;
class AVPropItem;
class AVShield;
class AVWeapon;
class UActorComponent;
class UAkAudioEvent;
class UAnimSequence;
class UAnimSequenceBase;
class UBoxComponent;
class UCapsuleComponent;
class UCurveFloat;
class UMeshComponent;
class UPhysicalAnimationComponent;
class UPhysicsAsset;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USoundBase;
class UStaticMeshComponent;
class UVActiveEffectsPairingComponent;
class UVActorBehaviorBase;
class UVActorBehaviorMap;
class UVActorValuesPairingComponent;
class UVAltarAIBlackboard;
class UVAltarAkComponent;
class UVAnimationPairingComponent;
class UVCharacterFadeInOutComponent;
class UVCharacterStatePairingComponent;
class UVMergedSkeletalMeshComponent;
class UVPairedPawnMovementComponent;
class UVPairedPawnStateMachineComponent;
class UVPawnAnimatedAction;
class UVPawnSoundPairingComponent;
class UVPhysicsControllerComponent;
class UVStatusEffectOnPawn;
class UVStatusEffectToDelete;
class UVTESObjectRefComponent;
class UVTransformPairingComponent;
class UVWeaponsPairingComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class ALTAR_API AVPairedPawn : public ACharacter, public IVModdableBlueprintInterface, public IReactToFreezeInterface, public IVPhysicsControllable, public IVTransformPairable, public IVAudioPlayable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInPlaceAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorForwardPoseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterLowFatigueState OnEnterLowFatigueState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitLowFatigueState OnExitLowFatigueState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FakeRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> SecondaryColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* PhysicsBodyCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* WorldLimitDetectionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DrawnArrowMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPairedPawnStateMachineComponent* StateMachineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVMergedSkeletalMeshComponent* MergedMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* StatusEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPairedPawnMovementComponent* PairedPawnMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* PawnDebugInfoWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* EntityDetailsDebugWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPhysicsControllerComponent* PhysicsControllerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicalAnimationComponent* PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVCharacterFadeInOutComponent* CharacterFadeInOutComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestLinkDynamicAnimLayers OnRequestLinkDynamicAnimLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTransformPairingComponent* TransformPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAnimationPairingComponent* AnimationPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPawnSoundPairingComponent* PawnSoundPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVWeaponsPairingComponent* WeaponsPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVCharacterStatePairingComponent* OblivionActorStatePairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVActorValuesPairingComponent* ActorValuesPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVActiveEffectsPairingComponent* ActiveEffectsPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightingUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentLightingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentLightingValueWithTorch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesDetectionLightingAllowShadowOcclusionTests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HitSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInCombatStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsImmuneToShieldBashEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> AllowedMeleeTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestrictedMeleeTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawRotationDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SpecialAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DynamicAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot LastPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRagdollFacingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOblivionAnimGroup CurrentSpellCastAnimGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRotationSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RotationSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FVMovementInputThresholds> MovementInputThresholdsPerMaxGait;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextureEffectStart OnTextureEffectStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextureEffectStop OnTextureEffectStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextureEffectReset OnTextureEffectReset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AgainstBorderRegionTimerHandle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShouldersHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShouldersHalfWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionLightingBottomPointHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionLightingCenterHeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterpolateFakeRootLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayFakeRootLocationDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterpolateFakeRootOnlyZAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> FakeRootDistanceInterpSpeedFactorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> FakeRootVelocityInterpSpeedFactorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFakeRootDistanceFromCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToRejoinRootWhenStoppingFakeRootInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsPreventingFakeRootInterp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ChangeMaterialEffectTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SendAttackFollowThroughTimerHandle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimatedActionStartedDelegate OnAnimatedActionStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVPawnAnimatedAction* CurrentAnimatedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HitReactIgnoredTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVPropItem*> CurrentPropItemsInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverRun;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroundMaterialType GroundMaterialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LightingUpdateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVLifeState LifeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVAnimAction OblivionAnimAction;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bInDebugPerceptionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    UVAltarAIBlackboard* AIBlackboard;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVPhysicsSimulationStartDelegate OnPhysicsSimulationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVPhysicsSimulationStopDelegate OnPhysicsSimulationStopped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVBufferedInputTag> BufferedInputTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LastAnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVActorBehaviorMap> BehaviorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnarmedAttackReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerceptionUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PerceptionUpdateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStickyCollisionStateEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBePushedOnImpactWithPawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AVPairedPawn*, FVPerceptionState> PerceptionStateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVStatusEffectOnPawn*> StatusEffectsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVStatusEffectToDelete*> StatusEffectsToDeleteList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVStatusEffectOnPawn* HighestPriorityStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVStatusEffectOnPawn* SecondPriorityStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVStatusEffectOnPawn* EnchantPriorityStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVSkinType SkinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCastingSpellWithStaff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorBlinkDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorBlinkDelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorBlinkDuration;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PainEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FootstepEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BlockEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ImpactEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WhooshEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EquipEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* UnequipEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DamageRumbleEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrengthEncumbranceMult;
    
public:
    AVPairedPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDrawnArrowVisibility();
    
    UFUNCTION(BlueprintCallable)
    void UndoRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void TryLinkTorch();
    
    UFUNCTION(BlueprintCallable)
    void TryLinkConversationIdle();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToPassiveMoveset();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToCombatMoveset();
    
    UFUNCTION(BlueprintCallable)
    void SwitchRagdollState();
    
    UFUNCTION(BlueprintCallable)
    void StartDodgeCooldown();
    
    UFUNCTION(BlueprintCallable)
    void SpawnDrawnArrowMeshComponent();
    
    UFUNCTION(BlueprintCallable)
    void ShowEntityDetailsWidget(int32 DebugIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetStickyCollisionStateEnabled(bool bEnableStickyCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetSneak(bool bShouldSneak);
    
    UFUNCTION(BlueprintCallable)
    void SetRagdollConstraints(EVConstrainingMode PawnRagdollConstrainingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetOblivionAnimAction(EVAnimAction AnimAction);
    
    UFUNCTION(BlueprintCallable)
    void SetLifeState(EVLifeState NewLifeState);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPlayerCharacter(bool NewIsPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SendVampireFeed();
    
    UFUNCTION(BlueprintCallable)
    void SendStagger();
    
    UFUNCTION(BlueprintCallable)
    void SendSpellReleaseCast(bool bIsStaffCast);
    
    UFUNCTION(BlueprintCallable)
    void SendSpellCast();
    
    UFUNCTION(BlueprintCallable)
    void SendShieldBashHitOnPairedPawn(AVPairedPawn* StruckPawn);
    
    UFUNCTION(BlueprintCallable)
    void SendRecoil();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendPuppetAnimGroup(EVAnimGroupSection Section, EVAnimGroupAction Action, EVAnimGroup AnimGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendPuppetAnimAction(EVAnimAction AnimationAction) const;
    
    UFUNCTION(BlueprintCallable)
    void SendMeleeHitOnPairedPawn(AVPairedPawn* StruckPawn, bool bIsPowerAttack, float SneakDamageMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SendKnockStateGetUp();
    
    UFUNCTION(BlueprintCallable)
    void SendKnockState(bool bIsKnockedOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendJump() const;
    
    UFUNCTION(BlueprintCallable)
    void SendDrawWeaponSwitch(bool bShouldDrawWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SendBowAttack(float DrawDuration, bool bIsSwimming);
    
    UFUNCTION(BlueprintCallable)
    void SendBlockHit();
    
    UFUNCTION(BlueprintCallable)
    void SendBlock(bool bIsBlocking);
    
    UFUNCTION(BlueprintCallable)
    void SendAttackStartedEvent();
    
    UFUNCTION(BlueprintCallable)
    void SendAttack(EVActionType AttackType, float AttackDuration);
    
    UFUNCTION(BlueprintCallable)
    TArray<AVPairedPawn*> RunPawnMeleeHitDetection(FBox LocalSpaceBaseHitbox, FVector CenterOffset, float MaxHorizontalAngleDegrees, float MaxVerticalAngleDegrees);
    
    UFUNCTION(BlueprintCallable)
    void ResetGameplayTags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RequestPowerAttackVocalization() const;
    
    UFUNCTION(BlueprintCallable)
    void RequestFootstepActionToWwise(FName Action);
    
    UFUNCTION(BlueprintCallable)
    void RequestApplyKnockForce(FVPawnKnockdownRequest RequestData, bool bCanSwitchToKnockdownState);
    
    UFUNCTION(BlueprintCallable)
    void RequestActiveEffectsFromOG();
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTags(const FGameplayTagContainer& GameplayTagsToRemove, bool bIncludeChildTags);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTag(FGameplayTag TagToRemove, bool bIncludeChildTags);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponChanged(const AVWeapon* WeaponForm);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWaterWalkingValueChanged(EVActorValues ActorValue, float PreviousBaseValue, float PreviousModifiedValue, float NewBaseValue, float NewModifiedValue);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateOverEncumbrance(EVActorValues ActorValue, float PreviousBaseValue, float PreviousModifiedValue, float NewBaseValue, float NewModifiedValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTorchVisibilityChanged(const AActor* TorchActor, bool bEquipping);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSummonPawn(bool bIsSummoned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialBloodVFX();
    
    UFUNCTION(BlueprintCallable)
    void OnShieldChanged(const AVShield* ShieldActor, bool bEquipping);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPropItemEndingPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerceptionDebugModeDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerceptionDebugModeActivated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitReaction(float ReceivedDamage, const FVector& HitLocation, const FVector& HitNormal, FVector HitDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnGhostStateChanged(bool bIsGhost);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapWithBorder(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeathVFX();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCombatMiss();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatHitTaken(const FPairedOblivionHitEvent& HitEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatHitDealt(const FPairedOblivionHitEvent& HitEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeActionState(EVActionType ActionState) const;
    
    UFUNCTION(BlueprintCallable)
    void OnCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapWithBorder(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnActorValueChanged_Paralysis(EVActorValues ActorValue, float PreviousBaseValue, float PreviousModifiedValue, float NewBaseValue, float NewModifiedValue);
    
    UFUNCTION(BlueprintCallable)
    void OnActionStateEntered(const FGameplayTag& InStateBaseTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponDrawn() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsValidTargetForStickyCollision(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderStatusEffect(FName StatusEffectName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnconscious() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRagdolling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnimatedAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverEncumbered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeleeObstructed(const AVPairedPawn* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHorse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeadFromSpawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeadFromKilled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAliveFromUnconscious() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAliveFromSpawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAliveFromResurrection() const;
    
    UFUNCTION(BlueprintCallable)
    void HideEntityDetailsWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidLookAtPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGameplayTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyGameplayTag(const FGameplayTagContainer& CheckTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllGameplayTags(const FGameplayTagContainer& CheckTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GroundMaterialTypeIsValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUnconsciousProfileName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSpellProjectileSpawnLocation(FName CastingSocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetProjectileDirectionVector(const FVector& SpawnLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPawnMeleeHitboxFromBase(FVector AimingStartPoint, float CapsuleRadius, FVector StartPointOffset, FVector AimingDirection, float ReachMultiplier, FBox LocalSpaceBaseHitbox, FVector& OutHitboxCenter, FVector& OutHitboxHalfExtent, FQuat& OutHitboxQuat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVAnimAction GetOblivionAnimAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMeleeHitboxFromBase(FBox LocalSpaceBaseHitbox, FVector StartPointOffset, FVector& OutHitboxCenter, FVector& OutHitboxHalfExtent, FQuat& OutHitboxQuat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVLifeState GetLifeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastFakeRootUpdateVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsStickyCollisionStateEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInteractionAimingDirectionVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGroundMaterialType GetGroundMaterialType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEquippedWeaponSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVOblivionAIProcedureType GetCurrentProcedureType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicsAsset* GetCurrentPhysicsAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCombatAimingDirectionVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetBodyMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UVActorBehaviorBase* GetBehaviorForTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseSneakDamageMultiplierForCurrentWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMeshComponent*> GetAllVisibleMeshComponents(bool bNeedToBeVisible) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVBufferedInputTag> GetAllBufferedInputTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAliveProfileName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAimingStartPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActorBlinkDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActorBlinkDelayMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActorBlinkDelayMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag FindFirstGameplayTagMatching(FGameplayTag TagToMatch) const;
    
    UFUNCTION(BlueprintCallable)
    void DoRagdoll(EVRagdollSetup Setup);
    
    UFUNCTION(BlueprintCallable)
    void DisableFatigueFreeze(float FatigueRestorationPercentage);
    
    UFUNCTION(BlueprintCallable)
    void DeactivatePerceptionDebugMode();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeShieldBashFatigueCost();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeMeleeAttackFatigue(bool bIsPowerAttack);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeKnockdownRequest(FVPawnKnockdownRequest& LatestRequestData);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeDodgeFatigueCost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseAimOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOnlySwim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFly() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAnimatedAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBlink() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyAndSaveConstraintProfile(const FName ProfileName);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTags(const FGameplayTagContainer& GameplayTagsToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTag(FGameplayTag TagToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddBufferedInputTagWithCustomTime(FGameplayTag TagToAdd, float CustomBufferTime);
    
    UFUNCTION(BlueprintCallable)
    void AddBufferedInputTag(FGameplayTag TagToAdd);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePerceptionDebugMode();
    
    UFUNCTION(BlueprintCallable)
    void ActivateFatigueFreeze();
    

    // Fix for true pure virtual functions not being implemented
};

