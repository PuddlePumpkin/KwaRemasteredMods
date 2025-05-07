#include "VAltarCameraActor.h"
#include "VCharacterFadeInOutComponent.h"

AVAltarCameraActor::AVAltarCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ImageCalibrationMID = NULL;
    this->SepiaToneMenuBackgroundMat = NULL;
    this->SepiaToneMenuBackgroundMID = NULL;
    this->CharacterFadeInOutComponent = NULL;
}


