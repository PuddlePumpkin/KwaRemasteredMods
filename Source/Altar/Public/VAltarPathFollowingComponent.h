#pragma once
#include "CoreMinimal.h"
#include "SteeringBehaviorsPathFollowingComponent.h"
#include "VAltarPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVAltarPathFollowingComponent : public USteeringBehaviorsPathFollowingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStrafingAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirectPawnTrackingAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInDebugMode;
    
    UVAltarPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

