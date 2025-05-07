#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "VGenericInputActionData.h"
#include "VInputNavigationSettings.generated.h"

class UInputMappingContext;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVInputNavigationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData UpNavigationIA;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData RightNavigationIA;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData DownNavigationIA;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData LeftNavigationIA;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData AcceptIA;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData BackIA;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInputMappingContext> GenericNavigationInputMappingContext;
    
    UVInputNavigationSettings();

};

