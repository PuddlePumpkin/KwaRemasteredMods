#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ENavigationInputAction.h"
#include "NavigationUIElement.generated.h"

class INavigationUIElement;
class UNavigationUIElement;

UINTERFACE(Blueprintable)
class UNavigationUIElement : public UInterface {
    GENERATED_BODY()
};

class INavigationUIElement : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnfocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubmitPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelPressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNavigatable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<INavigationUIElement> GetNavigationWidgetForAction(ENavigationInputAction Action);
    
};

