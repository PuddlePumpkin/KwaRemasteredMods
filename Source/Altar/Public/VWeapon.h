#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EVAttribute.h"
#include "VEquippable.h"
#include "VPhysicsControllable.h"
#include "VTransformPairable.h"
#include "VWeapon.generated.h"

class USkeletalMeshComponent;
class UVAltarAkComponent;
class UVPhysicsControllerComponent;
class UVTESObjectRefComponent;
class UVTransformPairingComponent;

UCLASS(Blueprintable)
class ALTAR_API AVWeapon : public AVEquippable, public IVPhysicsControllable, public IVTransformPairable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTransformPairingComponent* TransformPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPhysicsControllerComponent* PhysicsControllerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LocomotionMovesetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVAttribute WeaponScalingAttribute;
    
    AVWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttachmentUpdate(USkeletalMeshComponent* TargetSkeletalMeshComponent, bool bIsDrawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetWeaponTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVAttribute GetWeaponScalingAttribute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSheathedAttachmentSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLocomotionMovesetTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDrawnAttachmentSocketName() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateWeaponShadows();
    
    UFUNCTION(BlueprintCallable)
    void ActivateWeaponShadows();
    

    // Fix for true pure virtual functions not being implemented
};

