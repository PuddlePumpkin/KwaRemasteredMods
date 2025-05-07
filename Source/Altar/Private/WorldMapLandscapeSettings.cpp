#include "WorldMapLandscapeSettings.h"

FWorldMapLandscapeSettings::FWorldMapLandscapeSettings() {
    this->TESToUnrealWorldScaleFactor = 0.00f;
    this->TESCellMetricSize = 0.00f;
    this->TESCellQuadsCount = 0.00f;
    this->TESCellQuadMetricSize = 0.00f;
    this->TESCellsPerComponent = 0;
    this->SectionsPerComponent = 0;
    this->QuadsPerSection = 0;
    this->WorldPartitionGridSize = 0;
    this->bFlipYAxis = false;
    this->bGenerateLayers = false;
    this->bDebugCells = false;
}

