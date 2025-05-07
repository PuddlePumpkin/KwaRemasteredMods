#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VBethesdaNetIntegrationSubsystem.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class ONLINESUBSYSTEMBETHESDANET_API UVBethesdaNetIntegrationSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBdkEnabledInEditor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBdkEnabledInBuild;
    
public:
    UVBethesdaNetIntegrationSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnStartupComplete();
    
};

