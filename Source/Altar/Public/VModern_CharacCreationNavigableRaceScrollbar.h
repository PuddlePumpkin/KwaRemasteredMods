#pragma once
#include "CoreMinimal.h"
#include "VAltarNavigableScrollBox.h"
#include "VModern_CharacCreationNavigableRaceScrollbar.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ALTAR_API UVModern_CharacCreationNavigableRaceScrollbar : public UVAltarNavigableScrollBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerTimeSpeedFactor;
    
public:
    UVModern_CharacCreationNavigableRaceScrollbar();

protected:
    UFUNCTION(BlueprintCallable)
    void ScrollBody(const float& ScrollDelta, const float& TriggerTime);
    
};

