#pragma once
#include "CoreMinimal.h"
#include "ReactToFreezeInterface.h"
#include "VActor.h"
#include "VPhysicsControllable.h"
#include "VFlora.generated.h"

class AVPairedPawn;
class UStaticMeshComponent;
class UVPhysicsControllerComponent;
class UVTESObjectRefComponent;

UCLASS(Blueprintable)
class ALTAR_API AVFlora : public AVActor, public IReactToFreezeInterface, public IVPhysicsControllable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEmpty;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPhysicsControllerComponent* PhysicsControllerComponent;
    
    AVFlora(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmptyFlagChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivated(AVPairedPawn* ActivatorPawn, bool bSuccessfullyPicked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBePicked() const;
    

    // Fix for true pure virtual functions not being implemented
};

