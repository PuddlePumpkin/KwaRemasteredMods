#include "VClassPhysicsControlSettings.h"

FVClassPhysicsControlSettings::FVClassPhysicsControlSettings() {
    this->bIsGrabbable = false;
    this->bIsTelekinesisTargetable = false;
    this->bIsAnchored = false;
    this->PhysicsSimulationBehaviour = EVPhysicsSimulationBehaviour::ALWAYS;
    this->PhysicsLoadingBehaviour = EVPhysicsLoadingBehaviour::IGNORE_LOAD;
    this->bDoesRepositionOnLoad = false;
    this->bDoesReattachOnLoad = false;
    this->bDoesRestoreAttachmentAfterSimulating = false;
    this->bDoesUseCCD = false;
    this->bAreCodeDrivenPhysicsSettingsAllowed = false;
    this->CanEverAffectNavigationByDefault = false;
    this->bDoesGeneratePontoonsAtRuntime = false;
    this->bNeedsBuoyancyOrientationAdjustment = false;
    this->GeneratedPontoonSizeScale = 0.00f;
    this->BuoyancyCoefficient = 0.00f;
    this->bDoesPlayCollisionSound = false;
    this->DefaultSelfSurfaceType = EVDefaultSurfaceType::Armor;
    this->bCanSnapToEnvironment = false;
}

