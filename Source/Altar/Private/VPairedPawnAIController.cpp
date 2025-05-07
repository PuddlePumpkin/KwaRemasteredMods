#include "VPairedPawnAIController.h"
#include "VAltarPathFollowingComponent.h"
#include "VSteeringBehaviorsComponent.h"

AVPairedPawnAIController::AVPairedPawnAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVAltarPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->bSetControlRotationFromPawnOrientation = false;
    this->bInDebugMode = false;
    this->bInCombatDebugMode = false;
    this->CurrentProcedureType = EVOblivionAIProcedureType::NONE;
    this->ControlledPairedPawn = NULL;
    this->AltarPathFollowingComponent = NULL;
    this->SteeringBehaviorsComponent = CreateDefaultSubobject<UVSteeringBehaviorsComponent>(TEXT("SteeringBehaviorsComponent"));
    this->CannotSwimFilterClass = NULL;
    this->CanOnlySwimFilterClass = NULL;
    this->FollowPlayerCharacterFilterClass = NULL;
    this->MovementActorTarget = NULL;
    this->CurrentProcedureExecution = NULL;
    this->CurrentPackageExecutionOverride = NULL;
    this->ReachabilityUpdateFrequency = 5.00f;
    this->MovementRestrictionUpdateFrequency = 5.00f;
    this->TrackedTargets[0] = NULL;
    this->TrackedTargets[1] = NULL;
    this->TrackedTargets[2] = NULL;
    this->TrackedTargets[3] = NULL;
    this->TrackedTargets[4] = NULL;
    this->bWantsToRun = false;
    this->bWantsToSneak = false;
    this->CurrentDestinationPawn = NULL;
}






void AVPairedPawnAIController::OnControlledPawnWeaponChanged(const AVWeapon* NewWeaponForm) {
}

bool AVPairedPawnAIController::HasDynamicTarget() const {
    return false;
}

AActor* AVPairedPawnAIController::GetDynamicTargetActor() const {
    return NULL;
}

void AVPairedPawnAIController::DeactivateDebugMode() {
}

void AVPairedPawnAIController::DeactivateCombatDebugMode() {
}

float AVPairedPawnAIController::ComputePackageRadius(int32 RadiusTypeIndex) const {
    return 0.0f;
}

void AVPairedPawnAIController::ActivateDebugMode() {
}

void AVPairedPawnAIController::ActivateCombatDebugMode() {
}


