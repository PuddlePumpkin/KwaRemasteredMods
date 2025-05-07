#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VNavigableCommonUserWidgetBase.h"
#include "VAltarNavigableCommonUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNavigableCommonUserWidget : public UVNavigableCommonUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LayerTag;
    
public:
    UVAltarNavigableCommonUserWidget();

};

