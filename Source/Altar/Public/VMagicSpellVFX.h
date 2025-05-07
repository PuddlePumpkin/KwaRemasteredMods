#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"
#include "Engine/NetSerialization.h"
#include "EVVFXType.h"
#include "ReactToFreezeInterface.h"
#include "VTransformPairable.h"
#include "VMagicSpellVFX.generated.h"

class AVActivable;
class AVMagicSpellVFXBlueprint;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class UTESEffectSetting;
class UVHitBoxComponent;
class UVTESObjectRefComponent;
class UVTransformPairingComponent;

UCLASS(Blueprintable)
class ALTAR_API AVMagicSpellVFX : public AActor, public IReactToFreezeInterface, public IVTransformPairable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTransformPairingComponent* TransformPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVHitBoxComponent* HitBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovementComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESEffectSetting* form;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVMagicSpellVFXBlueprint*> MagicBlueprints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVActivable> ActivableCaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCastingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAreaEffectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestructionOrderdedByVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestructionOrderdedByOblivion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal AreaEffectImpactNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal AreaEffectNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SpellCasterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ProjectileVelocity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVVFXType KindOfVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CollidedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> CollidedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandleFogProjectile;
    
public:
    AVMagicSpellVFX(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SendVFXEndSignal(AActor* Blueprint);
    
    UFUNCTION(BlueprintCallable)
    void OnSpellProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    

    // Fix for true pure virtual functions not being implemented
};

