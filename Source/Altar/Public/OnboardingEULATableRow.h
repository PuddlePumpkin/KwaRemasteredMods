#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVCountryGroup.h"
#include "OnboardingEULATableRow.generated.h"

USTRUCT(BlueprintType)
struct FOnboardingEULATableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVCountryGroup CountryGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MainEULA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesHaveAdditiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AdditiveEULA;
    
    ALTAR_API FOnboardingEULATableRow();
};

