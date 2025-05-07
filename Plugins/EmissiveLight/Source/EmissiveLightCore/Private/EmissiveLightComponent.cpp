#include "EmissiveLightComponent.h"

UEmissiveLightComponent::UEmissiveLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->bEmissiveLightSource = true;
    this->bVisibleInSceneCaptureOnly = true;
    this->LightType = EEmissiveLightType::Sphere;
    this->MaxDrawDistance = 200.00f;
    this->MaxIntersectionDistance = 200.00f;
    this->bEnable = true;
}

void UEmissiveLightComponent::SetIntensity(float Intensity) {
}

void UEmissiveLightComponent::SetColor(const FLinearColor& Color) {
}


