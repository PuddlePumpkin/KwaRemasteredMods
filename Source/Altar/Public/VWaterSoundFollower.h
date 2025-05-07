#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VAudioPlayable.h"
#include "VWaterSoundFollower.generated.h"

class UAkAudioEvent;
class UVAltarAkComponent;

UCLASS(Blueprintable)
class ALTAR_API AVWaterSoundFollower : public AActor, public IVAudioPlayable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartWaterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopWaterEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkComponent* AkAudioComponent;
    
    AVWaterSoundFollower(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadFinished();
    

    // Fix for true pure virtual functions not being implemented
};

