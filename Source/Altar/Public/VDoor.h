#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "ReactToFreezeInterface.h"
#include "VActor.h"
#include "VAudioPlayable.h"
#include "VPhysicsControllable.h"
#include "VTransformPairable.h"
#include "VDoor.generated.h"

class AActor;
class UAkAudioEvent;
class UBoxComponent;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class UVAltarAkComponent;
class UVAltarAkPortalComponent;
class UVAnimationObjectPairingComponent;
class UVNavModifierComponent;
class UVPhysicsControllerComponent;
class UVTESObjectRefComponent;
class UVTransformPairingComponent;

UCLASS(Blueprintable)
class ALTAR_API AVDoor : public AVActor, public IReactToFreezeInterface, public IVPhysicsControllable, public IVTransformPairable, public IVAudioPlayable {
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
    UVNavModifierComponent* NavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PortalBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkPortalComponent* AkPortalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* LoadingBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeTeleportation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavlinkLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpened;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefreshNavigationDataInBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OpeningDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedOcclusionInterpolationDuration;
    
public:
    AVDoor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetClosed();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetAnimationTickEnable_Delegate(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerTeleportationRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapPreLoadBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClose();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapPreLoadBox(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox, bool UnusedSweep, const FHitResult& EmptyHitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDoorToExitSewers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimated() const;
    

    // Fix for true pure virtual functions not being implemented
};

