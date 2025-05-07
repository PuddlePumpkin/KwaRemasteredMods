#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkAcousticTextureSetComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkAcousticTextureSetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAkAcousticTextureSetComponent(const FObjectInitializer& ObjectInitializer);

};

