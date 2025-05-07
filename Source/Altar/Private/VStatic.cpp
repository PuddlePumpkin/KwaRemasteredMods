#include "VStatic.h"
#include "Components/SceneComponent.h"
#include "VPhysicsControllerComponent.h"
#include "VTESObjectRefComponent.h"

AVStatic::AVStatic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->MeshComponent = NULL;
    this->PhysicsControllerComponent = CreateDefaultSubobject<UVPhysicsControllerComponent>(TEXT("PhysicsControllerComponent"));
}



