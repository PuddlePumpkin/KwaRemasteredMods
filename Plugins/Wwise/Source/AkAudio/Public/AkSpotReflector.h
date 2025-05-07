#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkSpotReflector.generated.h"

class UAkAcousticTexture;
class UAkAuxBus;

UCLASS()
class AKAUDIO_API AAkSpotReflector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAuxBus* EarlyReflectionAuxBus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FString EarlyReflectionAuxBusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAcousticTexture* AcousticTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SameRoomOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableRoomOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* RoomOverride;
    
    AAkSpotReflector(const FObjectInitializer& ObjectInitializer);

};

