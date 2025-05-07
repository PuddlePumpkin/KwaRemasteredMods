#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EVDetectionLightingObstructionTracesType.h"
#include "VDetectionLightingSettings.generated.h"

class UVDetectionLightingProfile;

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class ALTAR_API UVDetectionLightingSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDetectionLightingUpdatesInMainMenu;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVDetectionLightingProfile> DefaultLightProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InverseSquaredFalloffLerpAlphaExponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultPawnDetectionLightingUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultPlayerDetectionLightingUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkyLuminanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumEnvironmentLuminance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightsLuminanceSumBiasFactor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightsLuminanceSumBiasExponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpotlightsConeAngleFalloffExponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSynchronousFallbackObstructionLineTraces;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObstructionUpdatesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightObstructionHistorySize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RunningAsyncLineTracesTarget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsyncLineTraceDebugDrawDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVDetectionLightingObstructionTracesType ObstructionTracesType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObstructionTracesPerLight;
    
    UVDetectionLightingSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumberOfLineTracesForTraceType(const EVDetectionLightingObstructionTracesType TraceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfLineTracesForCurrentTraceType() const;
    
};

