#pragma once
#include "CoreMinimal.h"
#include "ESliderInputType.h"
#include "OnZoomLevelChangedDelegateDelegate.h"
#include "VAltarNavigableSlider.h"
#include "VModern_MapZoomSliderSmooth.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ALTAR_API UVModern_MapZoomSliderSmooth : public UVAltarNavigableSlider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoomLevelChangedDelegate OnZoomLevelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBelongToWorldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSliderNavigationActionDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESliderInputType> SliderInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseWheelMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderArrowsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerTriggersMultiplier;
    
    UVModern_MapZoomSliderSmooth();

};

