#include "VEnhancedLocomotionSystemCharacterAnimInstance.h"

UVEnhancedLocomotionSystemCharacterAnimInstance::UVEnhancedLocomotionSystemCharacterAnimInstance() {
    this->CharacterMoveComp = NULL;
    this->bIsMoving = false;
    this->HorizontalSpeed = 0.00f;
    this->VerticalSpeed = 0.00f;
    this->bIsLayerActive = false;
    this->TurnInPlaceAnimInstanceClass = NULL;
    this->ClampedAxis = 0.00f;
    this->bHasMovingTags = false;
    this->StartStateMachineName = TEXT("Start");
    this->StartStateName = TEXT("Start");
    this->bIsStartingToMove = false;
    this->bIsStartingToRun = false;
    this->StartPoseAlpha = 0.00f;
    this->bIsStartCompleted = false;
    this->StopSpeedThreshold = 150.00f;
    this->bCanFootLock = false;
    this->bSwitchToStand = false;
    this->bSwitchToSneak = false;
    this->bShouldUseStandSneakTransition = false;
    this->bInStandSneakTransition = false;
    this->StandSneakTransitionStartPos = 0.00f;
    this->UpperBodyOrientationCurve = TEXT("PelvisRotation");
    this->MinMaxForwardAngle = 95.00f;
    this->MinMaxBackwardAngle = 85.00f;
    this->CurrentOrientationAngle = 0.00f;
    this->UpperBodyAngle = 0.00f;
    this->bCanUseOrientationWarping = false;
    this->StrideScale = 1.00f;
    this->LeanVertical = 0.00f;
    this->LeanHorizontal = 0.00f;
    this->CombatLeanVertical = 0.00f;
    this->CombatLeanHorizontal = 0.00f;
    this->LeanPoseAlpha = 0.00f;
    this->RightFootLockAlpha = 0.00f;
    this->LeftFootLockAlpha = 0.00f;
    this->LeftFootLockCurveName = TEXT("FootLock_L");
    this->RightFootLockCurveName = TEXT("FootLock_R");
    this->LeftFootLockBone = TEXT("VB root_foot_l");
    this->RightFootLockBone = TEXT("VB root_foot_r");
}

void UVEnhancedLocomotionSystemCharacterAnimInstance::OnStandSneakTransitionUpdate(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVEnhancedLocomotionSystemCharacterAnimInstance::OnStandSneakTransitionFinished(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVEnhancedLocomotionSystemCharacterAnimInstance::OnLeftStartState(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVEnhancedLocomotionSystemCharacterAnimInstance::OnEnterStartState(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}


