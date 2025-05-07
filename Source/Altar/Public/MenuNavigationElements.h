#pragma once
#include "CoreMinimal.h"
#include "MenuNavigationElements.generated.h"

class INavigationUIElement;
class UNavigationUIElement;
class UVAltarMenu;

USTRUCT(BlueprintType)
struct FMenuNavigationElements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<INavigationUIElement> Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<INavigationUIElement> Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarMenu* Menu;
    
    ALTAR_API FMenuNavigationElements();
};

