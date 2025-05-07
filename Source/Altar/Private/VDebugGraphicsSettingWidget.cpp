#include "VDebugGraphicsSettingWidget.h"

UVDebugGraphicsSettingWidget::UVDebugGraphicsSettingWidget() {
    this->ParentWidget = NULL;
}

int32 UVDebugGraphicsSettingWidget::SoftwareRaytracingQuality() const {
    return 0;
}


bool UVDebugGraphicsSettingWidget::IsHardwareRayTracingSupportedByHardware() const {
    return false;
}

bool UVDebugGraphicsSettingWidget::IsHardwareRayTracingSupportedByBuild() const {
    return false;
}

bool UVDebugGraphicsSettingWidget::IsHardrwareRayTracingOn() const {
    return false;
}

int32 UVDebugGraphicsSettingWidget::HardwareRayTracingLightingMode() const {
    return 0;
}


void UVDebugGraphicsSettingWidget::AddConsoleCommandToSave(const FString& Command) const {
}


