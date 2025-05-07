#pragma once
#include "CoreMinimal.h"
#include "FLegacyMainMenuButtonVisibility.h"
#include "VViewModelBase.h"
#include "VMainMenuViewModel.generated.h"

class ACameraActor;
class ULevelStreamingDynamic;
class UWorld;

UCLASS(Blueprintable)
class ALTAR_API UVMainMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSettingsMenuToggle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSaveLoadMenuToggle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnConfirmNewGameMessageMenu);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnConfirmLoadGameMessageMenu);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCancelNewGameMessageMenu);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConfirmNewGameMessageMenu OnConfirmNewGameMessageMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelNewGameMessageMenu OnCancelNewGameMessageMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConfirmLoadGameMessageMenu OnConfirmLoadGameMessageMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingsMenuToggle OnSettingsMenuOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingsMenuToggle OnSettingsMenuClose;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveLoadMenuToggle OnSaveLoadMenuOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveLoadMenuToggle OnSaveLoadMenuClose;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ContinueVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VersionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMainMenuButtonVisibility ButtonsVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoviePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GamertagText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesNeedOnboarding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACameraActor> InitialActorViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> LevelsLoaded;
    
public:
    UVMainMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void ValidateOnboarding();
    
    UFUNCTION(BlueprintCallable)
    void UpdateContinueVisibility();
    
private:
    UFUNCTION(BlueprintCallable)
    void UnRegisterToLevelChangeData();
    
    UFUNCTION(BlueprintCallable)
    void UnloadInstanceLevels(UWorld* CurrentWorld);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVersionText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMoviePlaying(bool bNewIsMoviePlaying);
    
    UFUNCTION(BlueprintCallable)
    void SetContinueVisibility(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonsVisibility(FLegacyMainMenuButtonVisibility NewButtonsVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SendCloseMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void RequiresHideHUD();
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterToLevelChangeData();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterSendConfirmNewGame();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedSettings();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedNewGame();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedLoadGame();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedExitGame();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedContinue();
    
    UFUNCTION(BlueprintCallable)
    void PrepareLoadingScreenContextOnNewGame();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPostSeamlessTravel();
    
    UFUNCTION(BlueprintCallable)
    void LoadInstanceOfLevels(UWorld* CurrentWorld);
    
    UFUNCTION(BlueprintCallable)
    bool IsBackgroundLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetVersionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMoviePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDoesNeedOnboarding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetContinueVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyMainMenuButtonVisibility GetButtonsVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBuildInfo() const;
    
};

