#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "EVPreloadPriority.h"
#include "VPairedAssetsLoadingSubsystem.generated.h"

class UTESForm;

UCLASS(Blueprintable)
class ALTAR_API UVPairedAssetsLoadingSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UVPairedAssetsLoadingSubsystem();

    UFUNCTION(BlueprintCallable)
    bool UnregisterPreloadRequestFromRequestID(const int64 InPreloadRequestID, const int64 InOwnerInstanceFormID);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterPreloadRequestFromFormID(const int64 InPairedActorFormID, const int64 InOwnerInstanceFormID);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterPreloadRequestFromForm(const UTESForm* InPairedActorForm, const int64 InOwnerInstanceFormID);
    
    UFUNCTION(BlueprintCallable)
    int64 RegisterPreloadRequestFromFormID(const int64 InPairedActorFormID, EVPreloadPriority InPriority, const int64 InOwnerInstanceFormID);
    
    UFUNCTION(BlueprintCallable)
    int64 RegisterPreloadRequestFromForm(const UTESForm* InPairedActorForm, EVPreloadPriority InPriority, const int64 InOwnerInstanceFormID);
    
};

