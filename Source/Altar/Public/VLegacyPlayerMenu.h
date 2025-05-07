#pragma once
#include "CoreMinimal.h"
#include "ELegacyPlayerMenuPage.h"
#include "LegacyMenuActionBinding.h"
#include "VAltarMenu.h"
#include "VLegacyPlayerMenu.generated.h"

class UCommonActivatableWidget;
class UVInventoryMenu;
class UVLegacyHudMain;
class UVLegacyMagicMenu;
class UVLegacyMapMenu;
class UVLegacySettingsMenu;
class UVLegacyStatsMenu;
class UVPlayerMenuViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyPlayerMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMenuActionBinding CloseMenuData;
    
public:
    UVLegacyPlayerMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayPlayerInInventory(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveToNextMenuPage(const bool bLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UVPlayerMenuViewModel* GetViewModelRef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyStatsMenu* GetStatsMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacySettingsMenu* GetSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonActivatableWidget* GetMenuFromEnum(ELegacyPlayerMenuPage Page) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyMapMenu* GetMapMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyMagicMenu* GetMagicMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVInventoryMenu* GetInventoryMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyHudMain* GetHudMain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UCommonActivatableWidget* GetCodex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseMenu();
    
};

