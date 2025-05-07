#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "FLegacyControlsDevice.h"
#include "LegacyControlsInputMapping.h"
#include "VLegacyControlsInputMapping.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyControlsInputMapping : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLegacyControlsMappingEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLegacyControlsInputMappingUpdated, const FText&, Action, const FKey&, Mapping);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyControlsInputMappingUpdated OnMappingUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyControlsMappingEvent OnMappingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyControlsMappingEvent OnMappingCancelled;
    
    UVLegacyControlsInputMapping();

    UFUNCTION(BlueprintCallable)
    void SetMapping(const FKey& Value);
    
    UFUNCTION(BlueprintCallable)
    void Set(const FLegacyControlsInputMapping& Value, FLegacyControlsDevice InDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetMapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyControlsDevice GetDevice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAction() const;
    
};

