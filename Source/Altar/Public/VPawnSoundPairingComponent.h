#pragma once
#include "CoreMinimal.h"
#include "VActorPairingComponent.h"
#include "VAudioPlayable.h"
#include "VPawnSoundPairingComponent.generated.h"

class UAkAudioEvent;
class UVAltarAkComponent;
class UVHumanoidHeadComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVPawnSoundPairingComponent : public UVActorPairingComponent, public IVAudioPlayable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkComponent* DialogueComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVHumanoidHeadComponent* HeadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TorchEquipEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TorchHoldEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TorchUnequipEvent;
    
public:
    UVPawnSoundPairingComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UnloadNonPlayingDialogues();
    

    // Fix for true pure virtual functions not being implemented
};

