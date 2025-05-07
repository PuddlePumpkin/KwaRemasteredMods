#include "AdvancedLookAtSettings.h"

UAdvancedLookAtSettings::UAdvancedLookAtSettings() {
    this->MeshForwardAxis = ESkeletonAxisForward::X;
    this->LookType = EAdvancedLookAt_LookType::GLANCE;
    this->ForceRotationSensibility = 0.01f;
    this->AngleBehind = 45.00f;
    this->HeadRadius = 25.00f;
    this->SpineRadius = 25.00f;
    this->bUseEyes = false;
    this->EyesSpeed = 0.00f;
    this->bUseHead = false;
    this->bUseSpine = false;
}


