#pragma once
#include "CoreMinimal.h"
#include "NavigationUIElement.h"
#include "VLegacyPlayerSubMenuBase.h"
#include "VCodexMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVCodexMenu : public UVLegacyPlayerSubMenuBase, public INavigationUIElement {
    GENERATED_BODY()
public:
    UVCodexMenu();


    // Fix for true pure virtual functions not being implemented
};

