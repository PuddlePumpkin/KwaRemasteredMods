#include "VQuiver.h"
#include "Components/StaticMeshComponent.h"

AVQuiver::AVQuiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Main Mesh Component"));
    this->MainStaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->ArrowMeshComponents.AddDefaulted(6);
    this->ArrowMesh = NULL;
    this->ArrowCount = 0;
}

void AVQuiver::OnArrowCountChange_Implementation(int32 NewCount) {
}

int32 AVQuiver::GetArrowCount() const {
    return 0;
}


