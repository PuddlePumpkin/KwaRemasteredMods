#include "VAltarNavigationSystem.h"

UVAltarNavigationSystem::UVAltarNavigationSystem() {
    this->SupportedAgents.AddDefaulted(3);
    this->bOverrideRuntimeWorldPartitionDataGatheringMode = true;
    this->RuntimeWorldPartitionDataGatheringMode = ENavDataGatheringModeConfig::Lazy;
    this->bFilterImplicitGeometryDirtyAreas = true;
    this->bAllowExplicitDoubleDressingDirtyAreas = true;
    this->bOnlyUnlockNavGenerationForDoubleDressing = false;
    this->NavMeshLandmarkClustersSubsystem = NULL;
}

void UVAltarNavigationSystem::OnNavigationDataEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


