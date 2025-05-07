#include "VGrabArmComponent.h"

UVGrabArmComponent::UVGrabArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrabAnchorComponent = NULL;
    this->GrabConstraintComponent = NULL;
    this->BaseTargetArmLength = 200.00f;
    this->MinArmLength = 100.00f;
    this->MaxArmLength = 300.00f;
    this->TargetArmLength = 200.00f;
    this->ProbeSize = 20.00f;
    this->ProbeChannel = ECC_GameTraceChannel6;
    this->bDoCollisionTest = true;
    this->bUseOblivionPlayerCharacterPickLookAt = true;
    this->bInheritPitch = true;
    this->bInheritYaw = true;
    this->bInheritRoll = true;
    this->PullSpeed = 100.00f;
    this->PushSpeed = 100.00f;
    this->bEnableGrabLag = false;
    this->bEnableGrabRotationLag = false;
    this->bUseGrabLagSubstepping = true;
    this->bDrawDebugLagMarkers = false;
    this->GrabLagSpeed = 10.00f;
    this->GrabRotationLagSpeed = 10.00f;
    this->GrabLagMaxTimeStep = 0.02f;
    this->GrabLagMaxDistance = 0.00f;
    this->bClampToMaxPhysicsDeltaTime = false;
    this->MinLinearDriveForce = 500.00f;
    this->MaxLinearDriveForce = 4000.00f;
    this->MinStrengthThreshold = 30;
    this->MaxStrengthThreshold = 100;
    this->LinearLimitLength = 1.00f;
    this->ConstraintBreakingLengthThreshold = 200.00f;
    this->BodyHierarchyDepthFactor = 0.70f;
    this->StaticMeshPhysicBodyLinearDampingOverride = 1.00f;
    this->StaticMeshPhysicBodyAngularDampingOverride = 5.00f;
    this->bDoesPropagateGrabArmYaw = true;
    this->bDoesPropagateGrabArmPitch = false;
    this->MinDotProductToDisplayGrabbedActorName = 0.60f;
}

bool UVGrabArmComponent::IsCollisionFixApplied() const {
    return false;
}

FVector UVGrabArmComponent::GetUnfixedGrabAnchorPosition() const {
    return FVector{};
}

FRotator UVGrabArmComponent::GetTargetRotation() const {
    return FRotator{};
}


