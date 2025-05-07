#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VAltarTestingSubsystem.generated.h"

UCLASS(Blueprintable)
class ALTARTESTING_API UVAltarTestingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UVAltarTestingSubsystem();

    UFUNCTION(BlueprintCallable)
    void OnLevelChangeStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelChangeCompleted();
    
};

