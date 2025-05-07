#pragma once
#include "CoreMinimal.h"
#include "ReactToFreezeInterface.h"
#include "VActor.h"
#include "VPhysicsControllable.h"
#include "VTransformPairable.h"
#include "VPointLight.generated.h"

class USceneComponent;
class UVAltarAkComponent;
class UVPhysicsControllerComponent;
class UVTESObjectRefComponent;
class UVTransformPairingComponent;

UCLASS(Blueprintable)
class ALTAR_API AVPointLight : public AVActor, public IReactToFreezeInterface, public IVPhysicsControllable, public IVTransformPairable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTransformPairingComponent* TransformPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPhysicsControllerComponent* PhysicsControllerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkComponent* AkAudioComponent;
    
    AVPointLight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightStatusChanged(bool bEnabled);
    

    // Fix for true pure virtual functions not being implemented
};

