#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VAltarStateConditionBase.h"
#include "VAltarStateConditionCheckGameplayTags.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarStateConditionCheckGameplayTags : public UVAltarStateConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTagsToCheck;
    
public:
    UVAltarStateConditionCheckGameplayTags();

};

