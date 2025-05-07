#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VDetectionLightingProfileComponent.generated.h"

class UVDetectionLightingProfile;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVDetectionLightingProfileComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVDetectionLightingProfile* DetectionLightingProfile;
    
    UVDetectionLightingProfileComponent(const FObjectInitializer& ObjectInitializer);

};

