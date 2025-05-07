#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkLateReverbComponent.generated.h"

class UAkAcousticTextureSetComponent;
class UAkAuxBus;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkLateReverbComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutoAssignAuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAuxBus* AuxBus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FString AuxBusName;
    
private:
    UPROPERTY()
    UAkAuxBus* AuxBusManual;
    
public:
    UAkLateReverbComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAutoAssignAuxBus(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void AssociateAkTextureSetComponent(UAkAcousticTextureSetComponent* textureSetComponent);
    
};

