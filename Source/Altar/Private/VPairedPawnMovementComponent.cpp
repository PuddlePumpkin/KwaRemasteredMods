#include "VPairedPawnMovementComponent.h"

UVPairedPawnMovementComponent::UVPairedPawnMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDoesSweepAllSecondaryColliders = true;
    this->bDoesDrawDebugSecondarySweepTraces = false;
    this->bCanPawnGetPushedBySimulatingActor = true;
    this->SimulatingActorPushFactor = 3.00f;
    this->MaximumSimulatingActorPushVelocity = 400.00f;
    this->bDoesDrawSimulatingActorPush = false;
    this->MoveRunMult = 0.00f;
    this->MoveRunAthleticsMult = 0.00f;
    this->MoveSwimRunAthleticsMult = 0.00f;
    this->MoveSwimRunBase = 0.00f;
    this->MoveSwimWalkAthleticsMult = 0.00f;
    this->MoveSwimWalkBase = 0.00f;
    this->MoveWeightMax = 0.00f;
    this->MoveWeightMin = 0.00f;
    this->MoveWalkMax = 0.00f;
    this->MoveWalkMin = 0.00f;
    this->MoveEncumEffectNoWea = 0.00f;
    this->MoveEncumEffect = 0.00f;
    this->MoveNoWeaponMult = 0.00f;
    this->MoveSneakMult = 0.00f;
    this->MoveSneakRunMult = 0.00f;
    this->MoveMaxFlySpeed = 0.00f;
    this->MoveMinFlySpeed = 0.00f;
    this->MoveSprintBaseMult = 0.00f;
    this->MoveSprintAthleticsMult = 0.00f;
    this->DirectionalSpeedCurve = NULL;
    this->StartWalkDuration = 0.00f;
    this->StopWalkDuration = 0.00f;
    this->StartRunDuration = 0.00f;
    this->StopRunDuration = 0.00f;
    this->StartSprintDuration = 0.00f;
    this->StopSprintDuration = 0.00f;
    this->bWantsToRun = false;
    this->RunningThresholdRatio = 0.75f;
    this->MoveSprintFatigueBaseCostPerSec = 5.00f;
    this->MoveSprintFatigueRegenDelay = 3.00f;
    this->DirectionalAxisLength = 0.00f;
    this->bUseOblivionLikeWalkingPhysics = true;
    this->bDisplayOblivionLocoDebug = false;
    this->SlopeAngleThresholdToUseDirectionalAntiClimbing = 60.00f;
    this->MaxSlopeAngleForFloorsNotEligibleForAntiClimbing = 70.00f;
    this->MinSlopeAntiClimbingActivationAngle = 10.00f;
    this->MaxSlopeAntiClimbingActivationAngle = 50.00f;
    this->MaxSlopeAngleBeforeSlide = 85.00f;
    this->MinJumpOffSlopeAngle = 65.00f;
    this->MinJumpOffSlopeVelocity = 200.00f;
    this->MinAntiClimbingFactor = 0.00f;
    this->MaxAntiClimbingFactor = 1.00f;
    this->MinVelocitySmoothingSpeed = 3000.00f;
    this->MaxVelocitySmoothingSpeed = 6000.00f;
    this->bCapUpwardVelocityAtMaxSlopeAngle = true;
    this->bPreventJumpOnStiffSlopes = true;
    this->PreventJumpMinSlopeAngle = 47.00f;
    this->bIsLocomotionDebugEnabled = false;
    this->bAccelerationEnabled = true;
    this->bForceUseParentDeceleration = false;
    this->MinSwimmingDepth = 0.80f;
    this->JumpOutOfWaterZFactor = 1.00f;
    this->DepthToAllowJumpOutOfWater = 0.90f;
    this->AcrobaticWaterJumpZFactor = 1.00f;
    this->bAddAboveWaterAcrobaticJumpDistanceAcceptance = false;
    this->AcrobaticWaterJumpMaxDistanceAboveWaterPlane = 50.00f;
    this->MaxWaterPlaneTestDistance = 1000.00f;
    this->UnderneathWaterPlaneTestOffset = -0.10f;
    this->FlotationStopDepth = 0.85f;
    this->FlotationTriggerDepth = 1.00f;
    this->SurfaceStabilisationSpeed = 150.00f;
    this->WaterDecelerationSpeed = 4.00f;
    this->WaterWalkJumpVerticalVelocityLimit = 2.00f;
    this->WaterWalkJumpHorizontalVelocityLimit = 90.00f;
    this->MinWaterplaneDistanceToEnableWaterWalk = 0.10f;
    this->MaxWaterplaneDistanceToEnableWaterWalk = 50.00f;
    this->bClampMinJumpOutOfWaterZForWaterWalk = true;
    this->MinJumpOutOfWaterZForWaterWalk = 600.00f;
    this->bCanSlideAgainstPawns = true;
    this->bBlockNormalVelocity = false;
    this->WaterSplashEvent = NULL;
}

void UVPairedPawnMovementComponent::SwimmingJumpOutOfWater() {
}

void UVPairedPawnMovementComponent::StopSprint() {
}

void UVPairedPawnMovementComponent::StartSprint() {
}

void UVPairedPawnMovementComponent::SetUseControllerRotation(bool bUseControllerRotation) {
}

void UVPairedPawnMovementComponent::SetPreventSwimming(bool bNeverSwim) {
}

void UVPairedPawnMovementComponent::SetOverrideMaxSpeed(float fNewOverrideMaxSpeed) {
}

void UVPairedPawnMovementComponent::SetOffsetMovementInput(FVector NewOverrideMoveInput) {
}

void UVPairedPawnMovementComponent::SetIsMovementLocked(bool LockMovement) {
}

void UVPairedPawnMovementComponent::SetGlobalSpeedMultiplier(float NewMultiplier) {
}

void UVPairedPawnMovementComponent::SetAllowWaterWalking(bool bNewAllowWaterWalking) {
}

void UVPairedPawnMovementComponent::ResetOverrideMaxSpeed() {
}

void UVPairedPawnMovementComponent::ResetOffsetMovementInput() {
}

void UVPairedPawnMovementComponent::ResetGlobalSpeedMultiplier() {
}

void UVPairedPawnMovementComponent::ResetFallingTimer() {
}

void UVPairedPawnMovementComponent::OnSprintFatigueRegenDelayFinished() {
}

void UVPairedPawnMovementComponent::OnPawnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UVPairedPawnMovementComponent::OnPawnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UVPairedPawnMovementComponent::OnHitFromSimulatingActor(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UVPairedPawnMovementComponent::IsWaterWalkingAllowed() const {
    return false;
}

bool UVPairedPawnMovementComponent::IsWaterWalking() const {
    return false;
}

bool UVPairedPawnMovementComponent::IsTouchingWater() const {
    return false;
}

bool UVPairedPawnMovementComponent::IsSprinting() const {
    return false;
}

bool UVPairedPawnMovementComponent::IsRunning() {
    return false;
}

bool UVPairedPawnMovementComponent::IsMovementLocked() const {
    return false;
}

bool UVPairedPawnMovementComponent::IsInSprintRegenDelay() const {
    return false;
}

bool UVPairedPawnMovementComponent::IsAboveWater() const {
    return false;
}

EVMoveDirection UVPairedPawnMovementComponent::GetMovementDirection() const {
    return EVMoveDirection::NONE;
}

float UVPairedPawnMovementComponent::GetMaxSwimWalkSpeed() const {
    return 0.0f;
}

float UVPairedPawnMovementComponent::GetMaxSwimRunSpeed() const {
    return 0.0f;
}

float UVPairedPawnMovementComponent::GetMaxGroundWalkSpeed() const {
    return 0.0f;
}

float UVPairedPawnMovementComponent::GetMaxGroundSprintSpeed() const {
    return 0.0f;
}

float UVPairedPawnMovementComponent::GetMaxGroundRunSpeed() const {
    return 0.0f;
}

float UVPairedPawnMovementComponent::GetMaxFlySpeed() const {
    return 0.0f;
}

bool UVPairedPawnMovementComponent::GetIsSwimming() const {
    return false;
}

float UVPairedPawnMovementComponent::GetImmersionDepth() const {
    return 0.0f;
}

float UVPairedPawnMovementComponent::GetGlobalSpeedMultiplier() const {
    return 0.0f;
}

float UVPairedPawnMovementComponent::GetFallingTimer() const {
    return 0.0f;
}

float UVPairedPawnMovementComponent::GetDistanceToUnderneathWaterPlane() const {
    return 0.0f;
}

float UVPairedPawnMovementComponent::GetCurrentGaitMaxSpeed() const {
    return 0.0f;
}

bool UVPairedPawnMovementComponent::DoSpecialJump(float JumpHeightMultiplier, float HorizontalVelocityMultiplier) {
    return false;
}

bool UVPairedPawnMovementComponent::CanWaterWalk() const {
    return false;
}

bool UVPairedPawnMovementComponent::CanJumpOutOfWater() const {
    return false;
}

bool UVPairedPawnMovementComponent::CanAcrobaticWaterJump() const {
    return false;
}

void UVPairedPawnMovementComponent::AcrobaticWaterJump() {
}


