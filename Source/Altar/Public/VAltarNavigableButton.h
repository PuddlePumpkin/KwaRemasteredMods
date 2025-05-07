#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VNavigableButton.h"
#include "VAltarNavigableButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNavigableButton : public UVNavigableButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LayerTag;
    
public:
    UVAltarNavigableButton();

};

