#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkSpatialAudioVolume.generated.h"

class UAkLateReverbComponent;
class UAkRoomComponent;
class UAkSurfaceReflectorSetComponent;

UCLASS()
class AKAUDIO_API AAkSpatialAudioVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkLateReverbComponent* LateReverb;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkRoomComponent* Room;
    
    AAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer);

};

