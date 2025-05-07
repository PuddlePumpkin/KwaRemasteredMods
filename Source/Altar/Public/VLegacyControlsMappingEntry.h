#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "FLegacyControlsDevice.h"
#include "NavigationListviewEntry.h"
#include "VLegacyControlsMappingEntry.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyControlsMappingEntry : public UNavigationListviewEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Mapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyControlsDevice Device;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEntryEnabled;
    
public:
    UVLegacyControlsMappingEntry();

    UFUNCTION(BlueprintCallable)
    void SetMapping(const FKey& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryEnabled(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDevice(const FLegacyControlsDevice Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMappingUpdated(const FKey& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLabelUpdated(const FText& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemObjectSet(UObject* ListItemObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsEntryEnabledUpdated(const bool Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetMapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEntryEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyControlsDevice GetDevice() const;
    
    UFUNCTION(BlueprintCallable)
    void CaptureInput();
    
};

