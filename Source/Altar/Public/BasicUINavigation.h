#pragma once
#include "CoreMinimal.h"
#include "ENavigationInputAction.h"
#include "BasicUINavigation.generated.h"

class INavigationUIElement;
class UNavigationUIElement;
class UWidget;

USTRUCT(BlueprintType)
struct FBasicUINavigation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ENavigationInputAction, UWidget*> DestinationWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<INavigationUIElement> WidgetNavigationParent;
    
public:
    ALTAR_API FBasicUINavigation();
};

