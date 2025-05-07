#include "EmissiveLight.h"
#include "EmissiveLightComponent.h"

AEmissiveLight::AEmissiveLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UEmissiveLightComponent>(TEXT("EmissiveLightComponent"));
    this->EmissiveLightComponent = (UEmissiveLightComponent*)RootComponent;
}


