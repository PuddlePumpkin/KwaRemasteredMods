#pragma once
#include "CoreMinimal.h"
#include "VLegacyPlayerSubMenuBase.h"
#include "VInventoryMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVInventoryMenu : public UVLegacyPlayerSubMenuBase {
    GENERATED_BODY()
public:
    UVInventoryMenu();

    UFUNCTION(BlueprintCallable)
    void SetBlockBackAction(bool bNewBlockBackAction);
    
};

