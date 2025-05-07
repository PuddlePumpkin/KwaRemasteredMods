#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkReverbVolume.generated.h"

class UAkAuxBus;
class UAkLateReverbComponent;

UCLASS()
class AKAUDIO_API AAkReverbVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    UAkAuxBus* AuxBus;
    
    UPROPERTY()
    FString AuxBusName;
    
    UPROPERTY()
    float SendLevel;
    
    UPROPERTY()
    float FadeRate;
    
    UPROPERTY()
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UAkLateReverbComponent* LateReverbComponent;
    
    AAkReverbVolume(const FObjectInitializer& ObjectInitializer);

};

