#include "VActivableStatic.h"
#include "Components/StaticMeshComponent.h"

AVActivableStatic::AVActivableStatic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("StaticMeshComponent"))) {
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
}

void AVActivableStatic::AttachNativeSceneComponentsToRoot() {
}


