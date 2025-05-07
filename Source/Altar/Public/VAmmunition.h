#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "VEquippable.h"
#include "VPhysicsControllable.h"
#include "VProjectilePenetrationSettings.h"
#include "VTransformPairable.h"
#include "VAmmunition.generated.h"

class AActor;
class AVPairedPawn;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class UStaticMeshComponent;
class UVAltarAkComponent;
class UVHitBoxComponent;
class UVPhysicsControllerComponent;
class UVTESObjectRefComponent;
class UVTransformPairingComponent;

UCLASS(Blueprintable)
class ALTAR_API AVAmmunition : public AVEquippable, public IVPhysicsControllable, public IVTransformPairable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTransformPairingComponent* TransformPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVHitBoxComponent* HitBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPhysicsControllerComponent* PhysicsControllerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OblivionArrowAge;
    
    AVAmmunition(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShootAmunition(AVPairedPawn* Shooter, const FVector& Direction, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SendCollide(float ArrowAgeMaxOnceCollided, AActor* CollidedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStaticMeshEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnStaticMeshBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnArrowLoadedInLevel();
    
    UFUNCTION(BlueprintCallable)
    void Despawn();
    
    UFUNCTION(BlueprintCallable)
    void Collide(const FHitResult& HitResult, const FVProjectilePenetrationSettings& PenetrationSettings, const AActor* TargetActor, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    

    // Fix for true pure virtual functions not being implemented
};

