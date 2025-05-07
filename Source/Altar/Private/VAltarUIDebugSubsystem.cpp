#include "VAltarUIDebugSubsystem.h"

UVAltarUIDebugSubsystem::UVAltarUIDebugSubsystem() {
    this->bIsInventoryDebugModeEnabled = false;
}

void UVAltarUIDebugSubsystem::SetInventoryDebugModeEnabled(bool bIsEnabled) {
}

void UVAltarUIDebugSubsystem::SetDebugInventoryItemScaleOffset(const FVector& InNewScaleOffset) {
}

void UVAltarUIDebugSubsystem::SetDebugInventoryItemRotationOffset(const FRotator& InNewRotationOffset) {
}

void UVAltarUIDebugSubsystem::SetDebugInventoryItemLocationOffset(const FVector& InNewLocationOffset) {
}

bool UVAltarUIDebugSubsystem::GetInventoryDebugModeState() {
    return false;
}

FVector UVAltarUIDebugSubsystem::GetDebugInventoryItemScaleOffset() {
    return FVector{};
}

FRotator UVAltarUIDebugSubsystem::GetDebugInventoryItemRotationOffset() {
    return FRotator{};
}

FVector UVAltarUIDebugSubsystem::GetDebugInventoryItemLocationOffset() {
    return FVector{};
}


