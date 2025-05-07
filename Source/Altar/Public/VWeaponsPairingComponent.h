#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "VActorPairingComponent.h"
#include "VWeaponsPairingComponent.generated.h"

class AActor;
class AVQuiver;
class AVShield;
class AVWeapon;
class UStaticMeshComponent;
class UTESAmmo;
class UTESObjectARMO;
class UTESObjectWEAP;
class UVStatusEffectOnPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVWeaponsPairingComponent : public UVActorPairingComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponFormChanged, const AVWeapon*, WeaponActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponDrawnStateChanged, bool, bIsWeaponDrawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTorchVisibilityChanged, const AActor*, TorchActor, bool, bEquipping);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTorchActorChanged, const AActor*, TorchActor, bool, bEquipping);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnShieldVisibilityChanged, const AActor*, ShieldActor, bool, bEquipping);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnShieldFormChanged, const AVShield*, ShieldActor, bool, bEquipping);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuiverFormChanged, const AVQuiver*, QuiverActor, bool, bEquipping);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponFormChanged OnWeaponFormChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuiverFormChanged OnQuiverFormChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTorchActorChanged OnTorchActorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTorchVisibilityChanged OnTorchVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShieldFormChanged OnShieldFormChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShieldVisibilityChanged OnShieldVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponDrawnStateChanged OnWeaponDrawnStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVStatusEffectOnPawn* WantedStatusEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ArrowStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESObjectWEAP* WeaponForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVWeapon* WeaponActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESObjectARMO* ShieldForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVShield* ShieldActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESAmmo* QuiverForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVQuiver* QuiverActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TorchActor;
    
public:
    UVWeaponsPairingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWeaponDrawn(bool bIsDrawn);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowMeshComponent(UStaticMeshComponent* NewArrowMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseArrow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponDrawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTorchHeld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuiverAttached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasShieldEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMainWeaponReach() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEquippedWeaponGameplayTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTESObjectWEAP* GetEquippedWeaponForm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVWeapon* GetEquippedWeaponActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetEquippedTorchActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTESObjectARMO* GetEquippedShieldForm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVShield* GetEquippedShieldActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTESAmmo* GetEquippedQuiverForm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVQuiver* GetEquippedQuiverActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetAttachedArrowLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void CallTextureEffectBroadcastStartOnWeapon(AVWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void CallTextureEffectBroadcastStartOnShield(AVShield* Shield, bool bEquipping);
    
    UFUNCTION(BlueprintCallable)
    void CallTextureEffectBroadcastStartOnQuiver(AVQuiver* Quiver, bool bEquipping);
    
};

