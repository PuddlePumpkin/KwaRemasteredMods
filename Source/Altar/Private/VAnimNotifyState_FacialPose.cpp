#include "VAnimNotifyState_FacialPose.h"

UVAnimNotifyState_FacialPose::UVAnimNotifyState_FacialPose() {
    this->bShouldOverrideMontage = false;
    this->FacialPose = EFacialPoseType::Attack;
    this->FacialPoseBlendWeight = 1.00f;
    this->FacialAnimInstanceClass = NULL;
}

void UVAnimNotifyState_FacialPose::UpdateFacialPose_Implementation(const AActor* OwnerActor, const EFacialPoseType AnimNotifyFacialPose, const float AnimNotifyBlendWeight, const bool bShouldOverrideFacialPose, const bool bIsAnimNotifyBegin) const {
}


