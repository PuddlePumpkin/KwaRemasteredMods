#pragma once
#include "CoreMinimal.h"
#include "AkSpatialAudioSettings.generated.h"

USTRUCT()
struct FAkSpatialAudioSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 MaxSoundPropagationDepth;
    
    UPROPERTY(EditAnywhere)
    float MovementThreshold;
    
    UPROPERTY(EditAnywhere)
    uint32 NumberOfPrimaryRays;
    
    UPROPERTY(EditAnywhere)
    uint32 ReflectionOrder;
    
    UPROPERTY(EditAnywhere)
    uint32 DiffractionOrder;
    
    UPROPERTY(EditAnywhere)
    uint32 MaxEmitterRoomAuxSends;
    
    UPROPERTY(EditAnywhere)
    uint32 DiffractionOnReflectionsOrder;
    
    UPROPERTY(EditAnywhere)
    float MaximumPathLength;
    
    UPROPERTY(EditAnywhere)
    float CPULimitPercentage;
    
    UPROPERTY(EditAnywhere)
    uint32 LoadBalancingSpread;
    
    UPROPERTY(EditAnywhere)
    bool EnableGeometricDiffractionAndTransmission;
    
    UPROPERTY(EditAnywhere)
    bool CalcEmitterVirtualPosition;
    
    AKAUDIO_API FAkSpatialAudioSettings();
};

