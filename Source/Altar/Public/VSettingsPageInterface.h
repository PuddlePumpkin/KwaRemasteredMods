#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VSettingsPageInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UVSettingsPageInterface : public UInterface {
    GENERATED_BODY()
};

class IVSettingsPageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesAllowNavigation() const;
    
};

