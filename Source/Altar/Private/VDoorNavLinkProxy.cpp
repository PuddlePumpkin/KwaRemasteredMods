#include "VDoorNavLinkProxy.h"
#include "VDoorNavLinkCustomComponent.h"

AVDoorNavLinkProxy::AVDoorNavLinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVDoorNavLinkCustomComponent>(TEXT("SmartLinkComp"))) {
    this->PointLinks.AddDefaulted(1);
}

void AVDoorNavLinkProxy::OnSmartNavLinkReached(const AActor* MovingActor, const FVector& DestinationPoint) {
}


