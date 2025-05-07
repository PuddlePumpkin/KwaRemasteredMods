#pragma once
#include "CoreMinimal.h"
#include "ELegacyPlayerMenuPage.h"
#include "OnForceFogUpdateDelegate.h"
#include "OnForceFooterUpdateDelegate.h"
#include "VViewModelBase.h"
#include "VPlayerMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVPlayerMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSettingsMenuToggle);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingsMenuToggle OnSettingsMenuOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingsMenuToggle OnSettingsMenuClose;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnForceFooterUpdate OnForceFooterUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnForceFogUpdate OnForceFogUpdate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyPlayerMenuPage MenuPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsQuickKeysVisible;
    
public:
    UVPlayerMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetQuickKeysVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPage(ELegacyPlayerMenuPage NewPage);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOpenPauseMenuHandler();
    
    UFUNCTION(BlueprintCallable)
    void RegisterClosePauseMenuHandler();
    
    UFUNCTION(BlueprintCallable)
    void RegisterCloseMenuHandler();
    
    UFUNCTION(BlueprintCallable)
    void RegisterCloseMenuFromSaveMenuHandler();
    
    UFUNCTION(BlueprintCallable)
    void RegisterChangeMenuHandler(ELegacyPlayerMenuPage NewPage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuickKeysVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyPlayerMenuPage GetCurrentPage() const;
    
};

