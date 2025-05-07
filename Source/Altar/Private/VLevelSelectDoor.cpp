#include "VLevelSelectDoor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

AVLevelSelectDoor::AVLevelSelectDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DoorText = FText::FromString(TEXT("None"));
    this->bUseDebugGamemode = false;
    this->MainStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Main Static Mesh"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision box"));
    this->BoxComponent->SetupAttachment(MainStaticMesh);
}


