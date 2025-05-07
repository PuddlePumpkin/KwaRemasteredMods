#include "VPairedPawn.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "VActiveEffectsPairingComponent.h"
#include "VActorValuesPairingComponent.h"
#include "VAltarAIBlackboard.h"
#include "VAltarAkComponent.h"
#include "VAnimationPairingComponent.h"
#include "VCharacterFadeInOutComponent.h"
#include "VCharacterStatePairingComponent.h"
#include "VMergedSkeletalMeshComponent.h"
#include "VPairedPawnAIController.h"
#include "VPairedPawnMovementComponent.h"
#include "VPairedPawnStateMachineComponent.h"
#include "VPawnSoundPairingComponent.h"
#include "VPhysicalAnimationComponent.h"
#include "VPhysicsControllerComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"
#include "VWeaponsPairingComponent.h"

AVPairedPawn::AVPairedPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVPairedPawnMovementComponent>(TEXT("CharMoveComp")).SetDefaultSubobjectClass<USkeletalMeshComponent>(TEXT("CharacterMesh0"))) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = AVPairedPawnAIController::StaticClass();
    this->TurnInPlaceAngleThreshold = 45.00f;
    this->ActorForwardPoseOffset = -20.00f;
    this->FakeRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FakeRootComp"));
    this->PhysicsBodyCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PhysicsBodyCollider"));
    this->WorldLimitDetectionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Border Region Collider"));
    this->DrawnArrowMeshComponent = NULL;
    this->StateMachineComponent = CreateDefaultSubobject<UVPairedPawnStateMachineComponent>(TEXT("State Machine"));
    this->MergedMeshComponent = CreateDefaultSubobject<UVMergedSkeletalMeshComponent>(TEXT("Merged Mesh Component"));
    this->StatusEffectComponent = NULL;
    this->PairedPawnMovementComponent = Cast<UVPairedPawnMovementComponent>(GetCharacterMovement());
;
    this->PawnDebugInfoWidgetComponent = NULL;
    this->EntityDetailsDebugWidgetComponent = NULL;
    this->PhysicsControllerComponent = CreateDefaultSubobject<UVPhysicsControllerComponent>(TEXT("PhysicsControllerComponent"));
    this->AkAudioComponent = CreateDefaultSubobject<UVAltarAkComponent>(TEXT("AudioComponent"));
    this->PhysicalAnimationComponent = CreateDefaultSubobject<UVPhysicalAnimationComponent>(TEXT("PhysicalAnimationComponent"));
    this->CharacterFadeInOutComponent = CreateDefaultSubobject<UVCharacterFadeInOutComponent>(TEXT("Fade In/Out component"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESRefComponent"));
    this->TransformPairingComponent = CreateDefaultSubobject<UVTransformPairingComponent>(TEXT("TransformPairingComponent"));
    this->AnimationPairingComponent = CreateDefaultSubobject<UVAnimationPairingComponent>(TEXT("Animation Pairing Component"));
    this->PawnSoundPairingComponent = CreateDefaultSubobject<UVPawnSoundPairingComponent>(TEXT("Pawn Sound Pairing Component"));
    this->WeaponsPairingComponent = CreateDefaultSubobject<UVWeaponsPairingComponent>(TEXT("Weapons Pairing Component"));
    this->OblivionActorStatePairingComponent = CreateDefaultSubobject<UVCharacterStatePairingComponent>(TEXT("Oblivion Actor State Pairing Component"));
    this->ActorValuesPairingComponent = CreateDefaultSubobject<UVActorValuesPairingComponent>(TEXT("ActorValuesPairingComponent"));
    this->ActiveEffectsPairingComponent = CreateDefaultSubobject<UVActiveEffectsPairingComponent>(TEXT("ActiveEffectsPairingComponent"));
    this->LightingUpdateFrequency = 10.00f;
    this->CurrentLightingValue = 0.00f;
    this->CurrentLightingValueWithTorch = 0.00f;
    this->bDoesDetectionLightingAllowShadowOcclusionTests = false;
    this->bInCombatStance = false;
    this->bIsImmuneToShieldBashEffect = false;
    this->bRestrictedMeleeTargeting = true;
    this->YawRotationDelta = 0.00f;
    this->SpecialAnimSequence = NULL;
    this->DynamicAnimSequence = NULL;
    this->bIsRagdollFacingUp = false;
    this->CurrentSpellCastAnimGroup = EOblivionAnimGroup::IDLE;
    this->bIsLanding = false;
    this->bUseRotationSpeedCurve = true;
    this->RotationSpeedCurve = NULL;
    this->ShouldersHeight = 50.00f;
    this->ShouldersHalfWidth = 25.00f;
    this->DetectionLightingBottomPointHeight = -20.00f;
    this->DetectionLightingCenterHeight = 20.00f;
    this->bInterpolateFakeRootLocation = false;
    this->bDisplayFakeRootLocationDebug = false;
    this->bInterpolateFakeRootOnlyZAxis = true;
    this->MaxFakeRootDistanceFromCapsule = 100.00f;
    this->TimeToRejoinRootWhenStoppingFakeRootInterp = 0.35f;
    this->CurrentAnimatedAction = NULL;
    this->bCanEverRun = true;
    this->GroundMaterialType = EGroundMaterialType::MT_INVALID;
    this->LifeState = EVLifeState::Alive_FromSpawn;
    this->OblivionAnimAction = EVAnimAction::ANIM_ACTION_NONE;
    this->bInDebugPerceptionMode = false;
    this->AIBlackboard = CreateDefaultSubobject<UVAltarAIBlackboard>(TEXT("Blackboard"));
    this->UnarmedAttackReach = 0.00f;
    this->PerceptionUpdateFrequency = 5.00f;
    this->bIsStickyCollisionStateEnabled = false;
    this->bShouldBePushedOnImpactWithPawn = true;
    this->HighestPriorityStatusEffect = NULL;
    this->SecondPriorityStatusEffect = NULL;
    this->EnchantPriorityStatusEffect = NULL;
    this->SkinType = EVSkinType::FLESH;
    this->bIsCastingSpellWithStaff = false;
    this->ActorBlinkDelayMin = 1.50f;
    this->ActorBlinkDelayMax = 4.00f;
    this->ActorBlinkDuration = 0.35f;
    this->PainEvent = NULL;
    this->FootstepEvent = NULL;
    this->BlockEvent = NULL;
    this->ImpactEvent = NULL;
    this->WhooshEvent = NULL;
    this->EquipEvent = NULL;
    this->UnequipEvent = NULL;
    this->DamageRumbleEvent = NULL;
    this->StrengthEncumbranceMult = 5.00f;
    this->AkAudioComponent->SetupAttachment(RootComponent);
    this->FakeRoot->SetupAttachment(RootComponent);
    if (this->MainSkeletalMeshComponent != NULL) //FIXME
        this->MainSkeletalMeshComponent->SetupAttachment(RootComponent);
    this->PhysicsBodyCollider->SetupAttachment(RootComponent);
    this->WorldLimitDetectionBox->SetupAttachment(RootComponent);
}

void AVPairedPawn::UpdateDrawnArrowVisibility() {
}

void AVPairedPawn::UndoRagdoll() {
}

void AVPairedPawn::TryLinkTorch() {
}

void AVPairedPawn::TryLinkConversationIdle() {
}

void AVPairedPawn::SwitchToPassiveMoveset() {
}

void AVPairedPawn::SwitchToCombatMoveset() {
}

void AVPairedPawn::SwitchRagdollState() {
}

void AVPairedPawn::StartDodgeCooldown() {
}

void AVPairedPawn::SpawnDrawnArrowMeshComponent() {
}

void AVPairedPawn::ShowEntityDetailsWidget(int32 DebugIndex) {
}

void AVPairedPawn::SetStickyCollisionStateEnabled(bool bEnableStickyCollision) {
}

void AVPairedPawn::SetSneak(bool bShouldSneak) {
}

void AVPairedPawn::SetRagdollConstraints(EVConstrainingMode PawnRagdollConstrainingMode) {
}

void AVPairedPawn::SetOblivionAnimAction(EVAnimAction AnimAction) {
}

void AVPairedPawn::SetLifeState(EVLifeState NewLifeState) {
}

void AVPairedPawn::SetIsPlayerCharacter(bool NewIsPlayer) {
}

void AVPairedPawn::SendVampireFeed() {
}

void AVPairedPawn::SendStagger() {
}

void AVPairedPawn::SendSpellReleaseCast(bool bIsStaffCast) {
}

void AVPairedPawn::SendSpellCast() {
}

void AVPairedPawn::SendShieldBashHitOnPairedPawn(AVPairedPawn* StruckPawn) {
}

void AVPairedPawn::SendRecoil() {
}

void AVPairedPawn::SendPuppetAnimGroup(EVAnimGroupSection Section, EVAnimGroupAction Action, EVAnimGroup AnimGroup) const {
}

void AVPairedPawn::SendPuppetAnimAction(EVAnimAction AnimationAction) const {
}

void AVPairedPawn::SendMeleeHitOnPairedPawn(AVPairedPawn* StruckPawn, bool bIsPowerAttack, float SneakDamageMultiplier) {
}

void AVPairedPawn::SendKnockStateGetUp() {
}

void AVPairedPawn::SendKnockState(bool bIsKnockedOut) {
}

void AVPairedPawn::SendJump() const {
}

void AVPairedPawn::SendDrawWeaponSwitch(bool bShouldDrawWeapon) {
}

void AVPairedPawn::SendBowAttack(float DrawDuration, bool bIsSwimming) {
}

void AVPairedPawn::SendBlockHit() {
}

void AVPairedPawn::SendBlock(bool bIsBlocking) {
}

void AVPairedPawn::SendAttackStartedEvent() {
}

void AVPairedPawn::SendAttack(EVActionType AttackType, float AttackDuration) {
}

TArray<AVPairedPawn*> AVPairedPawn::RunPawnMeleeHitDetection(FBox LocalSpaceBaseHitbox, FVector CenterOffset, float MaxHorizontalAngleDegrees, float MaxVerticalAngleDegrees) {
    return TArray<AVPairedPawn*>();
}

void AVPairedPawn::ResetGameplayTags() {
}

void AVPairedPawn::RequestPowerAttackVocalization() const {
}

void AVPairedPawn::RequestFootstepActionToWwise(FName Action) {
}

void AVPairedPawn::RequestApplyKnockForce(FVPawnKnockdownRequest RequestData, bool bCanSwitchToKnockdownState) {
}

void AVPairedPawn::RequestActiveEffectsFromOG() {
}

void AVPairedPawn::RemoveGameplayTags(const FGameplayTagContainer& GameplayTagsToRemove, bool bIncludeChildTags) {
}

void AVPairedPawn::RemoveGameplayTag(FGameplayTag TagToRemove, bool bIncludeChildTags) {
}

void AVPairedPawn::OnWeaponChanged(const AVWeapon* WeaponForm) {
}

void AVPairedPawn::OnWaterWalkingValueChanged(EVActorValues ActorValue, float PreviousBaseValue, float PreviousModifiedValue, float NewBaseValue, float NewModifiedValue) {
}

void AVPairedPawn::OnUpdateOverEncumbrance(EVActorValues ActorValue, float PreviousBaseValue, float PreviousModifiedValue, float NewBaseValue, float NewModifiedValue) {
}

void AVPairedPawn::OnTorchVisibilityChanged(const AActor* TorchActor, bool bEquipping) {
}



void AVPairedPawn::OnShieldChanged(const AVShield* ShieldActor, bool bEquipping) {
}

void AVPairedPawn::OnPropItemEndingPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}



void AVPairedPawn::OnLoadFinished() {
}


void AVPairedPawn::OnGhostStateChanged(bool bIsGhost) {
}

void AVPairedPawn::OnEndOverlapWithBorder(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


void AVPairedPawn::OnCombatMiss() {
}

void AVPairedPawn::OnCombatHitTaken(const FPairedOblivionHitEvent& HitEvent) {
}

void AVPairedPawn::OnCombatHitDealt(const FPairedOblivionHitEvent& HitEvent) {
}

void AVPairedPawn::OnChangeActionState_Implementation(EVActionType ActionState) const {
}

void AVPairedPawn::OnCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AVPairedPawn::OnBeginOverlapWithBorder(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AVPairedPawn::OnActorValueChanged_Paralysis(EVActorValues ActorValue, float PreviousBaseValue, float PreviousModifiedValue, float NewBaseValue, float NewModifiedValue) {
}

void AVPairedPawn::OnActionStateEntered(const FGameplayTag& InStateBaseTag) {
}

bool AVPairedPawn::IsWeaponEquipped() const {
    return false;
}

bool AVPairedPawn::IsWeaponDrawn() const {
    return false;
}

bool AVPairedPawn::IsValidTargetForStickyCollision(AActor* OtherActor) {
    return false;
}

bool AVPairedPawn::IsUnderStatusEffect(FName StatusEffectName) const {
    return false;
}

bool AVPairedPawn::IsUnconscious() const {
    return false;
}

bool AVPairedPawn::IsRagdolling() const {
    return false;
}

bool AVPairedPawn::IsPlayingAnimatedAction() const {
    return false;
}

bool AVPairedPawn::IsPlayerCharacter() const {
    return false;
}

bool AVPairedPawn::IsOverEncumbered() const {
    return false;
}

bool AVPairedPawn::IsMeleeObstructed(const AVPairedPawn* Target) const {
    return false;
}

bool AVPairedPawn::IsHorse() const {
    return false;
}

bool AVPairedPawn::IsDeadFromSpawn() const {
    return false;
}

bool AVPairedPawn::IsDeadFromKilled() const {
    return false;
}

bool AVPairedPawn::IsDead() const {
    return false;
}

bool AVPairedPawn::IsAttacking() const {
    return false;
}

bool AVPairedPawn::IsAliveFromUnconscious() const {
    return false;
}

bool AVPairedPawn::IsAliveFromSpawn() const {
    return false;
}

bool AVPairedPawn::IsAliveFromResurrection() const {
    return false;
}

void AVPairedPawn::HideEntityDetailsWidget() {
}

bool AVPairedPawn::HasValidLookAtPoint() const {
    return false;
}

bool AVPairedPawn::HasGameplayTag(FGameplayTag Tag) const {
    return false;
}

bool AVPairedPawn::HasAnyGameplayTag(const FGameplayTagContainer& CheckTags) const {
    return false;
}

bool AVPairedPawn::HasAllGameplayTags(const FGameplayTagContainer& CheckTags) const {
    return false;
}

bool AVPairedPawn::GroundMaterialTypeIsValid() {
    return false;
}

FName AVPairedPawn::GetUnconsciousProfileName() const {
    return NAME_None;
}

FVector AVPairedPawn::GetSpellProjectileSpawnLocation(FName CastingSocketName) const {
    return FVector{};
}

FVector AVPairedPawn::GetProjectileDirectionVector(const FVector& SpawnLocation) const {
    return FVector{};
}

void AVPairedPawn::GetPawnMeleeHitboxFromBase(FVector AimingStartPoint, float CapsuleRadius, FVector StartPointOffset, FVector AimingDirection, float ReachMultiplier, FBox LocalSpaceBaseHitbox, FVector& OutHitboxCenter, FVector& OutHitboxHalfExtent, FQuat& OutHitboxQuat) {
}

EVAnimAction AVPairedPawn::GetOblivionAnimAction() const {
    return EVAnimAction::ANIM_ACTION_NONE;
}

void AVPairedPawn::GetMeleeHitboxFromBase(FBox LocalSpaceBaseHitbox, FVector StartPointOffset, FVector& OutHitboxCenter, FVector& OutHitboxHalfExtent, FQuat& OutHitboxQuat) const {
}

EVLifeState AVPairedPawn::GetLifeState() const {
    return EVLifeState::Alive_FromSpawn;
}

FVector AVPairedPawn::GetLastFakeRootUpdateVelocity() const {
    return FVector{};
}

bool AVPairedPawn::GetIsStickyCollisionStateEnable() const {
    return false;
}

FVector AVPairedPawn::GetInteractionAimingDirectionVector() const {
    return FVector{};
}

EGroundMaterialType AVPairedPawn::GetGroundMaterialType() {
    return EGroundMaterialType::MT_STONE;
}

float AVPairedPawn::GetEquippedWeaponSpeed() const {
    return 0.0f;
}

EVOblivionAIProcedureType AVPairedPawn::GetCurrentProcedureType() const {
    return EVOblivionAIProcedureType::NONE;
}

UPhysicsAsset* AVPairedPawn::GetCurrentPhysicsAsset() const {
    return NULL;
}

FVector AVPairedPawn::GetCombatAimingDirectionVector() const {
    return FVector{};
}

USkeletalMeshComponent* AVPairedPawn::GetBodyMesh() const {
    return NULL;
}

UVActorBehaviorBase* AVPairedPawn::GetBehaviorForTag_Implementation(const FGameplayTag& Tag) {
    return NULL;
}

float AVPairedPawn::GetBaseSneakDamageMultiplierForCurrentWeapon() const {
    return 0.0f;
}

TArray<UMeshComponent*> AVPairedPawn::GetAllVisibleMeshComponents_Implementation(bool bNeedToBeVisible) const {
    return TArray<UMeshComponent*>();
}

TArray<FVBufferedInputTag> AVPairedPawn::GetAllBufferedInputTags() const {
    return TArray<FVBufferedInputTag>();
}

FName AVPairedPawn::GetAliveProfileName() const {
    return NAME_None;
}

FVector AVPairedPawn::GetAimingStartPosition() const {
    return FVector{};
}

float AVPairedPawn::GetActorBlinkDuration() const {
    return 0.0f;
}

float AVPairedPawn::GetActorBlinkDelayMin() const {
    return 0.0f;
}

float AVPairedPawn::GetActorBlinkDelayMax() const {
    return 0.0f;
}

FGameplayTag AVPairedPawn::FindFirstGameplayTagMatching(FGameplayTag TagToMatch) const {
    return FGameplayTag{};
}

void AVPairedPawn::DoRagdoll(EVRagdollSetup Setup) {
}

void AVPairedPawn::DisableFatigueFreeze(float FatigueRestorationPercentage) {
}

void AVPairedPawn::DeactivatePerceptionDebugMode() {
}

void AVPairedPawn::ConsumeShieldBashFatigueCost() {
}

void AVPairedPawn::ConsumeMeleeAttackFatigue(bool bIsPowerAttack) {
}

void AVPairedPawn::ConsumeKnockdownRequest(FVPawnKnockdownRequest& LatestRequestData) {
}

void AVPairedPawn::ConsumeDodgeFatigueCost() {
}

bool AVPairedPawn::CanUseAimOffset() const {
    return false;
}

bool AVPairedPawn::CanSwim() const {
    return false;
}

bool AVPairedPawn::CanOnlySwim() const {
    return false;
}

bool AVPairedPawn::CanFly() const {
    return false;
}

void AVPairedPawn::CancelAnimatedAction() {
}

bool AVPairedPawn::CanBlink() const {
    return false;
}

void AVPairedPawn::ApplyAndSaveConstraintProfile(const FName ProfileName) {
}

void AVPairedPawn::AddGameplayTags(const FGameplayTagContainer& GameplayTagsToAdd) {
}

void AVPairedPawn::AddGameplayTag(FGameplayTag TagToAdd) {
}

void AVPairedPawn::AddBufferedInputTagWithCustomTime(FGameplayTag TagToAdd, float CustomBufferTime) {
}

void AVPairedPawn::AddBufferedInputTag(FGameplayTag TagToAdd) {
}

void AVPairedPawn::ActivatePerceptionDebugMode() {
}

void AVPairedPawn::ActivateFatigueFreeze() {
}


