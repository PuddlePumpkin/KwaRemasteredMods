#pragma once
#include "CoreMinimal.h"
#include "LegacyLoadingMenuGameInfo.h"
#include "VAltarMenu.h"
#include "VLegacyLoadingMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyLoadingMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadingProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyLoadingMenuGameInfo LoadingScreen;
    
public:
    UVLegacyLoadingMenu();

    UFUNCTION(BlueprintCallable)
    void SetLoadingScreen(const FLegacyLoadingMenuGameInfo& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingProgress(const float Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingScreenUpdated(const FLegacyLoadingMenuGameInfo& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingProgressUpdated(const float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyLoadingMenuGameInfo GetLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoadingProgress() const;
    
};

