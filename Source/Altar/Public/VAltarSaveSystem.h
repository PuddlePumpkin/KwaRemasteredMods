#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VSaveLoadingContext.h"
#include "VAltarSaveSystem.generated.h"

class UVAltarSaveGame;
class UVAltarSaveMetaData;
class UVBaseAltarSaveData;

UCLASS(Blueprintable)
class ALTAR_API UVAltarSaveSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPreLoadAllAltarData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPostLoadAllAltarData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeleteMessageDeleted, bool, bAgreed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncSaveStarted, const UVAltarSaveGame*, SaveGame);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncSaveComplete, const UVAltarSaveGame*, SaveGame);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreLoadAllAltarData OnPreLoadAllAltarDataDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPostLoadAllAltarData OnPostLoadAllAltarDataDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeleteMessageDeleted OnDeleteMessageDeleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncSaveStarted OnAsyncSaveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncSaveComplete OnAsyncSaveComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAltarSaveMetaData* AltarSaveMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVSaveLoadingContext> AsyncMetaDataContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAltarSaveGame* AltarSaveGameInFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UVBaseAltarSaveData*> AltarSaveDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
public:
    UVAltarSaveSystem();

    UFUNCTION(BlueprintCallable)
    void SetProvisionScreenshot(int32 SizeX, int32 SizeY, const TArray<FColor>& Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestScreenshotAfterLevelChange();
    
    UFUNCTION(BlueprintCallable)
    void OnAsyncSaveComplete_Delegate(const UVAltarSaveGame* SaveGame);
    
};

