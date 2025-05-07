#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "VClairvoyanceNavLinkProxy.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVClairvoyanceNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    AVClairvoyanceNavLinkProxy(const FObjectInitializer& ObjectInitializer);

};

