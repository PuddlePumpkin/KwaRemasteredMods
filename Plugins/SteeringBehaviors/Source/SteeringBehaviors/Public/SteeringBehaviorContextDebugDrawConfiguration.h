#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SteeringBehaviorContextDebugDrawConfiguration.generated.h"

USTRUCT(BlueprintType)
struct STEERINGBEHAVIORS_API FSteeringBehaviorContextDebugDrawConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DebugLineLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DebugLineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugInterestMapColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugDangerMapColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugMaxSpeedNormalizedMapColor;
    
    FSteeringBehaviorContextDebugDrawConfiguration();
};

