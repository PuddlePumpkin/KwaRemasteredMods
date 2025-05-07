#pragma once
#include "CoreMinimal.h"
#include "ReactToFreezeInterface.h"
#include "VActor.h"
#include "VPhysicsControllable.h"
#include "VTransformPairable.h"
#include "VSigilStone.generated.h"

class UStaticMeshComponent;
class UVAltarAkComponent;
class UVPhysicsControllerComponent;
class UVTESObjectRefComponent;
class UVTransformPairingComponent;

UCLASS(Blueprintable)
class ALTAR_API AVSigilStone : public AVActor, public IReactToFreezeInterface, public IVPhysicsControllable, public IVTransformPairable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTransformPairingComponent* TransformPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPhysicsControllerComponent* PhysicsControllerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkComponent* AkAudioComponent;
    
    AVSigilStone(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

