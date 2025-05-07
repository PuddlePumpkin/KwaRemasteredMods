#pragma once
#include "CoreMinimal.h"
#include "VOriginalVideoSettingWidget.h"
#include "VDebugGraphicsSettingWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVDebugGraphicsSettingWidget : public UVOriginalVideoSettingWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ParentWidget;
    
    UVDebugGraphicsSettingWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 SoftwareRaytracingQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshMenuOptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHardwareRayTracingSupportedByHardware() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHardwareRayTracingSupportedByBuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHardrwareRayTracingOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 HardwareRayTracingLightingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindRefreshDelegate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddConsoleCommandToSave(const FString& Command) const;
    
};

