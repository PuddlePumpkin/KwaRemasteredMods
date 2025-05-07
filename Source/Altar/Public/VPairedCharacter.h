#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "EBipedModularBodySlot.h"
#include "ECharacterSex.h"
#include "EVBloodColor.h"
#include "EVCharacterRefreshSelector.h"
#include "EVVoiceType.h"
#include "InitialEquipmentInfo.h"
#include "OnAppearanceRefreshedEndDelegateDelegate.h"
#include "OnCharacterRaceChangedDelegateDelegate.h"
#include "OnCharacterSexChangedDelegateDelegate.h"
#include "VCharacterBodyPartProperties.h"
#include "VPairedPawn.h"
#include "VPairedCharacter.generated.h"

class AActor;
class AVPairedCreature;
class UAnimMontage;
class UChildActorComponent;
class UMotionWarpingComponent;
class USkeletalMeshComponent;
class UTESForm;
class UTESRace;
class UVCharacterAppearancePairingComponent;
class UVCharacterBodyPairingComponent;
class UVCharacterPhenotypeData;
class UVDockingPairingComponent;
class UVHumanoidHeadComponent;

UCLASS(Blueprintable)
class ALTAR_API AVPairedCharacter : public AVPairedPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DockWarpTargetName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESRace* Race;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSex Sex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVVoiceType VoiceType;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterRaceChangedDelegate OnCharacterRaceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterSexChangedDelegate OnCharacterSexChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAppearanceRefreshedEndDelegate OnAppearanceRefreshedEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultRaceAndSexPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVCharacterPhenotypeData* PhenotypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVHumanoidHeadComponent* HumanoidHeadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* HeadwearChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* UpperBodyChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* LowerBodyChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* HandsChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* FeetChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AmuletChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* RightRingChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    UChildActorComponent* LeftRingChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVCharacterBodyPairingComponent* CharacterBodyPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVDockingPairingComponent* DockingPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMotionWarpingComponent* HumanoidMotionWarpingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVCharacterAppearancePairingComponent* CharacterAppearancePairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmotionBlendValueMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasUndockingQueued;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBipedModularBodySlot, FInitialEquipmentInfo> InitialEquipmentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RefreshMergedMeshTimerHandle;
    
public:
    AVPairedCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WarpToDockingPosition();
    
    UFUNCTION(BlueprintCallable)
    void WaitForRefreshAppearanceToComplete(float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRaceAudioSwitch();
    
    UFUNCTION(BlueprintCallable)
    void UpdateGenderAudioSwitch();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SnapToStandingPosition(bool bUpdatePairedDockingState, bool bSnapToMarker);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVoiceType(const EVVoiceType NewVoiceType);
    
    UFUNCTION(BlueprintCallable)
    void SetSex(const ECharacterSex NewSex);
    
    UFUNCTION(BlueprintCallable)
    void SetRace(const UTESRace* NewRace);
    
    UFUNCTION(BlueprintCallable)
    void SetBodySectionsOnMesh(USkeletalMeshComponent* Components);
    
    UFUNCTION(BlueprintCallable)
    void RefreshAppearanceAsync(EVCharacterRefreshSelector Selector);
    
    UFUNCTION(BlueprintCallable)
    void RefreshAppearance(EVCharacterRefreshSelector Selector);
    
    UFUNCTION(BlueprintCallable)
    void ProcessPendingUndockingRequest();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponDrawnStateChanged(bool bIsWeaponDrawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnStartDockingToHorse() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRaceOrSexChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnFacialAnimationMontageDone(UAnimMontage* Montage, bool bInterrupted);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBodyPartPropertiesChanged(EBipedModularBodySlot Slot, const FVCharacterBodyPartProperties& Properties);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDockingProcess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDocked() const;
    
    UFUNCTION(BlueprintCallable)
    bool InitializeAppearanceFromForm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVVoiceType GetVoiceType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetUsedDockActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterSex GetSex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTESRace* GetRace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EBipedModularBodySlot, UTESForm*> GetInitialEquipmentMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVPairedCreature* GetHorse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UChildActorComponent* GetChildActorFromSlot(EBipedModularBodySlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, float> GetBonesScale(const TArray<FName>& Names) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoneScale(const FName& Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVBloodColor GetBloodColor() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishDockingToRequestedDockActor(bool bSnapTransform);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearAllDockingTags();
    
    UFUNCTION(BlueprintCallable)
    void CallTextureEffectBroadcastDelegate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyBodyPartPropertiesToChildActor(EBipedModularBodySlot Slot, const FVCharacterBodyPartProperties& Properties);
    
};

