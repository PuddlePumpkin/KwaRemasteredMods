#pragma once
#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "VDoorNavLinkCustomComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVDoorNavLinkCustomComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
    UVDoorNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer);

};

