#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "LightRigParameters.h"
#include "OnEnterQuitDialogueSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "DialogueSceneSubsystem.generated.h"

class AVLightRig;
class AVPairedCharacter;

UCLASS(Blueprintable)
class ALTAR_API UDialogueSceneSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterQuitDialogueSignature OnEnterDialogue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterQuitDialogueSignature OnQuitDialogue;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, AVLightRig*> LightRigsInFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightRigParameters LightRigBlueprintClass_TriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightRigParameters LightRigBlueprintClass_Global;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVLightRig> LightRigBlueprintClassDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVLightRig*> LightRigActorsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightRigIntensityFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideOffsetTimeBeforeDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetTimeBeforeDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideTimeToReachIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToReachIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMinIntensityPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinIntensityPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFallOffIntensityFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallOffIntensityFactor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyBetterShadowResolutionInDialogue;
    
    UDialogueSceneSubsystem();

    UFUNCTION(BlueprintCallable)
    AVLightRig* SpawnLightRigOnActor(AVPairedCharacter* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLightRigOnActor(AVPairedCharacter* TargetActor);
    
    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(ULevelVolumeSubsystem, STATGROUP_Tickables); }
};

