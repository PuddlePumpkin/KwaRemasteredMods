#pragma once
#include "CoreMinimal.h"
#include "VLegacyPlayerSubMenuBase.h"
#include "VLegacyMagicMenu.generated.h"

class UVLegacyMagicPopupMenu;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyMagicMenu : public UVLegacyPlayerSubMenuBase {
    GENERATED_BODY()
public:
    UVLegacyMagicMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveToNextPage(bool bRight);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyMagicPopupMenu* GetMagicPopup() const;
    
};

