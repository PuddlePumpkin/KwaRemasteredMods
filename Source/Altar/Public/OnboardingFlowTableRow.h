#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateBrush.h"
#include "OnboardingFlowTableRow.generated.h"

class UVAltarWidget;

USTRUCT(BlueprintType)
struct FOnboardingFlowTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVAltarWidget> FlowPageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PageBackground;
    
    ALTAR_API FOnboardingFlowTableRow();
};

