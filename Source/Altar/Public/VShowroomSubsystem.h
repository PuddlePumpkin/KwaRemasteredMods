#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EBipedModularBodySlot.h"
#include "ShowroomBackdropParamsUpdateDelegateDelegate.h"
#include "ShowroomHDRIBackdropParams.h"
#include "VShowroomSubsystem.generated.h"

class AActor;
class AVPairedCharacter;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class ALTAR_API UVShowroomSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowroomHDRIBackdropParams HDRIBackdropParams;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowroomBackdropParamsUpdateDelegate OnShowroomBackdropParamsUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpawnedActorAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SkySphereMID;
    
public:
    UVShowroomSubsystem();

    UFUNCTION(BlueprintCallable)
    AActor* SpawnBlueprintActor(const FString& BlueprintPath);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAnimatedActor(const FString& BlueprintPath, const FString& AnimationPath);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> SpawnActorsByAssetsPath(const TArray<FString>& InPaths, const FVector& CenterPoint, const FVector& BoxExtent, int32 Offset, bool& bRemainNotSpawned, TArray<FString>& OutPaths);
    
    UFUNCTION(BlueprintCallable)
    void SetSkylightIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetPropsHidden(bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetLightsHidden(bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRIRotation(float Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSex(bool bIsMale);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterRace(const FString& RaceFormPath);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterBodyPart(EBipedModularBodySlot Slot, const FString& FormPath);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundHDRI(const FString& HDRITexturePath);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetActorAnimation(AActor* SpawnedActor, const FString& AnimationPath);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveCharacterBodyPart(EBipedModularBodySlot Slot);
    
    UFUNCTION(BlueprintCallable)
    void HideDefaultBackgroundScene(bool bHidden);
    
private:
    UFUNCTION(BlueprintCallable)
    AActor* GetTargetPoint() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVPairedCharacter* GetShowroomCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateShowroomCharacter();
    
private:
    UFUNCTION(BlueprintCallable)
    FVector CalculateSpawnLocation();
    
};

