#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/LatentActionManager.h"
#include "AkGameObject.h"
#include "EAkCollisionChannel.h"
#include "AkComponent.generated.h"

class UAkAudioEvent;
class UAkAuxBus;
class UAkComponent;
class UAkSwitchValue;
class UAkTrigger;

UCLASS(ClassGroup=Audiokinetic, BlueprintType, Blueprintable, hidecategories=(Transform,Rendering,Mobility,LOD,Component,Activation), AutoExpandCategories=AkComponent, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkComponent : public UAkGameObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUseSpatialAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAkCollisionChannel> OcclusionCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OcclusionRefreshInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableSpotReflectors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OuterRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InnerRadius;
    
private:
    UPROPERTY(EditAnywhere)
    UAkAuxBus* EarlyReflectionAuxBus;
    
    UPROPERTY(EditAnywhere)
    FString EarlyReflectionAuxBusName;
    
    UPROPERTY(EditAnywhere)
    float EarlyReflectionBusSendGain;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DrawFirstOrderReflections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DrawSecondOrderReflections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DrawHigherOrderReflections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DrawDiffraction;
    
    UPROPERTY()
    bool StopWhenOwnerDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseReverbVolumes;
    
    UAkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSwitch(UAkSwitchValue* SwitchValue, const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetOutputBusVolume(float BusVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetListeners(const TArray<UAkComponent*>& Listeners);
    
    UFUNCTION(BlueprintCallable)
    void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSpotReflectors(bool in_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetEarlyReflectionsVolume(float SendVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetEarlyReflectionsAuxBus(const FString& AuxBusName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PostTrigger(UAkTrigger* TriggerValue, const FString& Trigger);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    int32 PostAssociatedAkEventAndWaitForEnd(FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    int32 PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ECollisionChannel> GetOcclusionCollisionChannel();
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    float GetAttenuationRadius() const;
    
};

