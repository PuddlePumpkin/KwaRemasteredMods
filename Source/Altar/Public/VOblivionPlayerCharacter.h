#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"
#include "EGameplayCameraContext.h"
#include "EMagicSchool.h"
#include "OnCachedLastHitObjectREFComponentDelegate.h"
#include "VPairedCharacter.h"
#include "VOblivionPlayerCharacter.generated.h"

class AActor;
class AVInventoryPlayerCharacter;
class AVQuiver;
class UAkAudioEvent;
class UChildActorComponent;
class UMaterialParameterCollection;
class USceneComponent;
class USkeletalMeshComponentBudgeted;
class USpringArmComponent;
class UVAltarSpringArmComponent;
class UVGrabArmComponent;
class UVTESObjectRefComponent;

UCLASS(Blueprintable)
class ALTAR_API AVOblivionPlayerCharacter : public AVPairedCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    AVInventoryPlayerCharacter* InventoryCharacterReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelekinesisDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelekinesisDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CharacterCustomizationCameraSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarSpringArmComponent* FirstPersonCameraSpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarSpringArmComponent* ThirdPersonCameraSpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraBoneName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCachedLastHitObjectREFComponent OnCachedLastHitObjectREFComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EMagicSchool, UAkAudioEvent*> SpellCastFailedSounds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFacingObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* FPSClippingFixGlobalParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FPSClippingFixAverageFilterSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FPSClippingFixWallDetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FPSClippingSSSWWorldUnitScaleFacingWall;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingFirstPersonMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* FirstPersonSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FirstPersonSkeletalMeshRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* FirstPersonUpperBodyChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* FirstPersonHandsChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* FirstPersonRightRingChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* FirstPersonLeftRingChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AimRaycastTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PickRaycastTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CloseToOblivionGateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGrabArmComponent* GrabArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    FHitResult LastHitResult;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FirstPersonSectionBitMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerFPSMeshBeingMadeVisible;
    
    AVOblivionPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseBowAimingRotation(bool bUseBowRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetLastHitObjectRefComponent(UVTESObjectRefComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void ResetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RequestPowerAttack() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshFPSClippingFixFirstPersonBody(bool bShoudForceRefresh);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTorchChanged(const AActor* TorchActor, bool bEquipping);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnStartTelekinesisPushAction();
    
    UFUNCTION(BlueprintCallable)
    void OnStartTelekinesisPullAction();
    
    UFUNCTION(BlueprintCallable)
    bool OnStartTelekinesisAction();
    
    UFUNCTION(BlueprintCallable)
    bool OnStartGrabAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnQuiverChanged(const AVQuiver* QuiverActor, bool bEquipping);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayFailCastSound(EMagicSchool MagicSchool);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameplayCameraFocusOnPoint(const FVector& FromPosition, const FVector& ToPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameplayCameraContextChanged(EGameplayCameraContext GameplayCameraContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitWaterSurface();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitUnderwater();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterWaterSurface();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterUnderwater();
    
    UFUNCTION(BlueprintCallable)
    void OnEndTelekinesisPushAction();
    
    UFUNCTION(BlueprintCallable)
    void OnEndTelekinesisPullAction();
    
    UFUNCTION(BlueprintCallable)
    void OnEndTelekinesisAction();
    
    UFUNCTION(BlueprintCallable)
    void OnEndGrabAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSubLevelName() const;
    
    UFUNCTION(BlueprintCallable)
    UVTESObjectRefComponent* GetLastHitObjectRefComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVInventoryPlayerCharacter* GetInventoryPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTryInteract() const;
    
};

