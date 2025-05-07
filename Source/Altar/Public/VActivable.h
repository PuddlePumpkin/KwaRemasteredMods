#pragma once
#include "CoreMinimal.h"
#include "ReactToFreezeInterface.h"
#include "Templates/SubclassOf.h"
#include "VActor.h"
#include "VPhysicsControllable.h"
#include "VTransformPairable.h"
#include "VActivable.generated.h"

class UNavArea;
class UNavModifierComponent;
class USkeletalMeshComponent;
class UVAltarAkComponent;
class UVAltarAkPortalComponent;
class UVAnimationObjectPairingComponent;
class UVPhysicsControllerComponent;
class UVTESObjectRefComponent;
class UVTransformPairingComponent;

UCLASS(Blueprintable)
class ALTAR_API AVActivable : public AVActor, public IReactToFreezeInterface, public IVPhysicsControllable, public IVTransformPairable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTransformPairingComponent* TransformPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAnimationObjectPairingComponent* AnimationObjectPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPhysicsControllerComponent* PhysicsControllerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesDetonateItsProjectilesAsSoonAsTheyAppear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeNavModifierAreaOnOpenCloseState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> OpenNavArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> CloseNavArea;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPhysicsWaitForCustomTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPortalStartsOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForwardAnimationOpensPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPortalOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* OwnedNavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkPortalComponent* PortalComponent;
    
public:
    AVActivable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerActivateForPhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivableSimulationStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivableSimulationStart();
    

    // Fix for true pure virtual functions not being implemented
};

