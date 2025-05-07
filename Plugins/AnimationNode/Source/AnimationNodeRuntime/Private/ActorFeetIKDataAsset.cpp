#include "ActorFeetIKDataAsset.h"

UActorFeetIKDataAsset::UActorFeetIKDataAsset() {
    this->Skeleton = NULL;
    this->bEnableAutofill = true;
    this->RootBoneSearcher = TEXT("game_root|root");
    this->PelvisBoneSearcher = TEXT("pelvis|root_m");
    this->FootBoneSearcher = TEXT("foot|ankle");
    this->LeanBoneSearcher = TEXT("spine_01|spine1_m");
    this->EndLeanBoneSearcher = TEXT("spine_05|chest_m");
    this->RootRotationAlpha = 0.00f;
    this->FeetRotationAlpha = 1.00f;
    this->MaxFeetHeightOffset = 100.00f;
    this->bCanLean = false;
    this->bUseBoneChain = true;
    this->MaxForwardLeanOffsetAngle = 10.00f;
    this->MaxBackwardLeanOffsetAngle = 5.00f;
    this->MaxSideLeanOffsetAngle = 5.00f;
    this->BodyRadius = 50.00f;
    this->FootCheckOffset = 50.00f;
    this->FloorCheckOffset = 100.00f;
    this->ElevationBalanceAlpha = 0.20f;
}


