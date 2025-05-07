#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EMenus.h"
#include "VAltarTelemetrySubsystem.generated.h"

class UVAltarSaveGame;

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class ALTAR_API UVAltarTelemetrySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenPerformanceHeartbeatSends;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EMenus> IgnoredMenus;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObserveEveryNumFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreAutoSavesForPerformanceHeartbeat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePerformanceHeartbeatInMainMenu;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GreatFrameTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoodFrameTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableFrameTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoorFrameTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenCharacterPlaytimeUpdates;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreQuestEventsInMainMenu;
    
    UVAltarTelemetrySubsystem();

    UFUNCTION(BlueprintCallable)
    void OnSaveStarted(const UVAltarSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveComplete(const UVAltarSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeToGameEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeToBlackBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnBISessionIDChanged(const FString& NewBISessionID);
    
    UFUNCTION(BlueprintCallable)
    void OnAppActivationStateChanged(const bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void ObserveCurrentFrameData();
    
};

