#pragma once
#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "VClairvoyanceNavLinkCustomComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVClairvoyanceNavLinkCustomComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
    UVClairvoyanceNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer);

};

