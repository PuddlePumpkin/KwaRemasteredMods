#include "VDetectionLightingSubsystem.h"

UVDetectionLightingSubsystem::UVDetectionLightingSubsystem() {
    this->SkylightIntensityCurve = NULL;
    this->DefaultLightProfile = NULL;
}

void UVDetectionLightingSubsystem::OnPostWorldCreation(UWorld* World) {
}

void UVDetectionLightingSubsystem::OnLightComponentBeginPlay(const ULightComponentBase* LightComponent) {
}

FName UVDetectionLightingSubsystem::GetTagName(const EVDetectionLightTag& LightTag) {
    return NAME_None;
}

EVDetectionLightTag UVDetectionLightingSubsystem::GetDetectionLightTag(const AActor* LightActor) {
    return EVDetectionLightTag::None;
}


