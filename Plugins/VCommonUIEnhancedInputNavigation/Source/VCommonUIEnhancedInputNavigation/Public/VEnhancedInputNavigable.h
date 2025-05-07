#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EVNavigationDirection.h"
#include "VEnhancedInputNavigable.generated.h"

class IVEnhancedInputNavigable;
class UVEnhancedInputNavigable;

UINTERFACE(Blueprintable, MinimalAPI)
class UVEnhancedInputNavigable : public UInterface {
    GENERATED_BODY()
};

class IVEnhancedInputNavigable : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnfocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocus();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNavigable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetWidgetLayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IVEnhancedInputNavigable> GetNavigationWidgetForAction(EVNavigationDirection Action) const;
    
};

