#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EExecBranch.h"
#include "EGPUType.h"
#include "VAltarBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAltarBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetUpscalingOptions();
    
    UFUNCTION(BlueprintCallable)
    static void IsHardwareAcceleratedGPUSchedulingEnabled_BP(EExecBranch& OutExecPin);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameRunningOnSSD();
    
    UFUNCTION(BlueprintCallable)
    static void GetUsedVRAMMB(UPARAM(Ref) int32& Total, UPARAM(Ref) int32& Used);
    
    UFUNCTION(BlueprintCallable)
    static EGPUType GetGPUBrand();
    
};

