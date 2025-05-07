#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "VDetectionLightingFakeSpotLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVDetectionLightingFakeSpotLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UVDetectionLightingFakeSpotLightComponent(const FObjectInitializer& ObjectInitializer);

};

