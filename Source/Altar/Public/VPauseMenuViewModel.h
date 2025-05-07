#pragma once
#include "CoreMinimal.h"
#include "ELegacyPauseButtonsIDs.h"
#include "VViewModelBase.h"
#include "VPauseMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVPauseMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisplayed;
    
public:
    UVPauseMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetIsOpeningSaveLoadMenu(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMenuClosing(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDisplayed(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedReturnToMainMenuButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedQuitGameButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedQuickSaveButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedButton(ELegacyPauseButtonsIDs InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void NotifySaveLoadMenuIsClosing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOpeningSaveLoadMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMenuClosing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDisplayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBuildInfo() const;
    
};

