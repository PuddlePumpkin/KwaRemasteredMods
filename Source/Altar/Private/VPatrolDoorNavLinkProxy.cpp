#include "VPatrolDoorNavLinkProxy.h"
#include "VBlackListNavLinkCustomComponent.h"

AVPatrolDoorNavLinkProxy::AVPatrolDoorNavLinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVBlackListNavLinkCustomComponent>(TEXT("SmartLinkComp"))) {
    this->PointLinks.AddDefaulted(1);
    this->PairedNavLink = NULL;
}


