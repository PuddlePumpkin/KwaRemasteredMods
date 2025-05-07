#include "VSubSpace.h"
#include "Components/SceneComponent.h"
#include "VSubSpaceComponent.h"
#include "VTESObjectRefComponent.h"

AVSubSpace::AVSubSpace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->SubSpaceComponent = CreateDefaultSubobject<UVSubSpaceComponent>(TEXT("SubSpaceComponent"));
    this->SubSpaceComponent->SetupAttachment(RootComponent);
}


