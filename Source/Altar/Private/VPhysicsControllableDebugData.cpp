#include "VPhysicsControllableDebugData.h"

FVPhysicsControllableDebugData::FVPhysicsControllableDebugData() {
    this->bIsGrabbable = false;
    this->bIsTelekinesisTargetable = false;
    this->bIsAnchored = false;
    this->SimulationBehaviour = EVPhysicsSimulationBehaviour::ALWAYS;
    this->PhysicsLoadingBehaviour = EVPhysicsLoadingBehaviour::IGNORE_LOAD;
    this->bDoesRepositionOnLoad = false;
    this->bDoesReattachOnLoad = false;
    this->bDoesRestoreAttachmentAfterSimulation = false;
    this->bDoesGeneratePontoonsAtRuntime = false;
    this->GeneratedPontoonSizeScale = 0.00f;
    this->BuoyancyCoefficient = 0.00f;
    this->bDoesPlayCollisionSound = false;
    this->DefaultSelfSurfaceType = EVDefaultSurfaceType::Armor;
    this->bIsPaired = false;
    this->bIsEnabled = false;
    this->bIsSimulating = false;
    this->ConstrainingMode = EVConstrainingMode::Free;
    this->bIsSleeping = false;
    this->bIsUsingBuoyancy = false;
    this->bIsGrabbed = false;
    this->ControlSettingsAuthority = EVPhysicsSettingsAuthority::FROM_INI_FILE;
    this->CollisionProfileAuthority = EVPhysicsSettingsAuthority::FROM_INI_FILE;
    this->WeightsAuthority = EVPhysicsSettingsAuthority::FROM_INI_FILE;
    this->DampingValuesAuthority = EVPhysicsSettingsAuthority::FROM_INI_FILE;
    this->NavigationSettingsAuthority = EVPhysicsSettingsAuthority::FROM_INI_FILE;
}

