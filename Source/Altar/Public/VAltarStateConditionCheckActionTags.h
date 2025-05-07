#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VAltarStateConditionBase.h"
#include "VAltarStateConditionCheckActionTags.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarStateConditionCheckActionTags : public UVAltarStateConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActionTags;
    
public:
    UVAltarStateConditionCheckActionTags();

};

