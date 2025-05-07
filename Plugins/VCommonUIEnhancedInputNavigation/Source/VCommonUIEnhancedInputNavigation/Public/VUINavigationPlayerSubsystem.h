#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "VUINavigationPlayerSubsystem.generated.h"

UCLASS(Blueprintable)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVUINavigationPlayerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UVUINavigationPlayerSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShiftKeyDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCtrlKeyDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAltKeyDown() const;
    
};

