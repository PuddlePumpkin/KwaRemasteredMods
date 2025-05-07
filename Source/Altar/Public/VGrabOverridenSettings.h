#pragma once
#include "CoreMinimal.h"
#include "VGrabOverridenSettings.generated.h"

USTRUCT(BlueprintType)
struct FVGrabOverridenSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticMeshPhysicBodyLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticMeshPhysicBodyAngularDamping;
    
    ALTAR_API FVGrabOverridenSettings();
};

