#include "VClairvoyanceNavLinkProxy.h"
#include "VClairvoyanceNavLinkCustomComponent.h"

AVClairvoyanceNavLinkProxy::AVClairvoyanceNavLinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVClairvoyanceNavLinkCustomComponent>(TEXT("SmartLinkComp"))) {
    this->PointLinks.AddDefaulted(1);
    this->bSmartLinkIsRelevant = true;
}


