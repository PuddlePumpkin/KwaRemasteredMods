#include "FeetIKSystemSettings.h"

FFeetIKSystemSettings::FFeetIKSystemSettings() {
    this->FBIKIterations = 0;
    this->FloorTolerance = 0.00f;
    this->FloorMaxDistanceToTransform = 0.00f;
    this->FloorCheckOffset = 0.00f;
    this->FootCheckOffset = 0.00f;
    this->SneakFootCheckOffset = 0.00f;
    this->HalfFloorRaycastNum = 0;
    this->FloorRaycastNum = 0;
    this->MinUnevenGroundValue = 0.00f;
    this->HighSpeedPelvisOffsetSmoothing = 0.00f;
    this->PelvisHeight = 0.00f;
    this->BodyRadius = 0.00f;
    this->FeetNum = 0;
    this->FeetRotationAlpha = 0.00f;
    this->MaxFeetHeightOffset = 0.00f;
    this->SnapMaxDistanceToCapsule = 0.00f;
    this->bFeetCanRotate = false;
    this->RootRotationAlpha = 0.00f;
    this->MinSlopeYToSneak = 0.00f;
    this->SneakMovementPelvisOffsetScale = 0.00f;
    this->SneakPelvisFeetHeightScale = 0.00f;
    this->MaxSneakPelvisOffset = 0.00f;
}

