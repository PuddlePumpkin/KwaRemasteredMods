#include "VDetectionLightingSettings.h"

UVDetectionLightingSettings::UVDetectionLightingSettings() {
    this->bIgnoreDetectionLightingUpdatesInMainMenu = true;
    this->InverseSquaredFalloffLerpAlphaExponent = 4.00f;
    this->DefaultPawnDetectionLightingUpdateFrequency = 10.00f;
    this->DefaultPlayerDetectionLightingUpdateFrequency = 15.00f;
    this->SkyLuminanceMultiplier = 1.00f;
    this->MaximumEnvironmentLuminance = 1.00f;
    this->LightsLuminanceSumBiasFactor = 1.00f;
    this->LightsLuminanceSumBiasExponent = 1.00f;
    this->SpotlightsConeAngleFalloffExponent = 0.15f;
    this->bAllowSynchronousFallbackObstructionLineTraces = true;
    this->ObstructionUpdatesPerSecond = 10.00f;
    this->LightObstructionHistorySize = 4;
    this->RunningAsyncLineTracesTarget = 10;
    this->AsyncLineTraceDebugDrawDuration = 1.00f;
    this->ObstructionTracesType = EVDetectionLightingObstructionTracesType::CentersOnly;
    this->ObstructionTracesPerLight = 1;
}

int32 UVDetectionLightingSettings::GetNumberOfLineTracesForTraceType(const EVDetectionLightingObstructionTracesType TraceType) {
    return 0;
}

int32 UVDetectionLightingSettings::GetNumberOfLineTracesForCurrentTraceType() const {
    return 0;
}


