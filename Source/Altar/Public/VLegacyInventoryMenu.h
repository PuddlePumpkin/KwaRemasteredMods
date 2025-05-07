#pragma once
#include "CoreMinimal.h"
#include "LegacyMenuActionBinding.h"
#include "VLegacyPlayerSubMenuBase.h"
#include "VLegacyInventoryMenu.generated.h"

class UVLegacyMagicPopupMenu;
class UVLegacyQuickKeysMenu;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyInventoryMenu : public UVLegacyPlayerSubMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMenuActionBinding DropItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMenuActionBinding SwitchPreviewData;
    
public:
    UVLegacyInventoryMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchPreviewWithController();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDropItemWithController();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyQuickKeysMenu* GetQuickKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyMagicPopupMenu* GetMagicPopup() const;
    
};

