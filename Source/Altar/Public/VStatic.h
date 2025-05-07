#pragma once
#include "CoreMinimal.h"
#include "ReactToFreezeInterface.h"
#include "VActor.h"
#include "VPhysicsControllable.h"
#include "VTransformPairable.h"
#include "VStatic.generated.h"

class USceneComponent;
class UVPhysicsControllerComponent;
class UVTESObjectRefComponent;

UCLASS(Blueprintable)
class ALTAR_API AVStatic : public AVActor, public IReactToFreezeInterface, public IVPhysicsControllable, public IVTransformPairable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPhysicsControllerComponent* PhysicsControllerComponent;
    
    AVStatic(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMagicEffectOnMarker(const FString& VFXName);
    

    // Fix for true pure virtual functions not being implemented
};

