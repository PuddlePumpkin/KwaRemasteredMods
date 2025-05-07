#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnboardingEULATableRow.h"
#include "VModernOnboardingEULATable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernOnboardingEULATable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOnboardingEULATableRow> EULAData;
    
public:
    UVModernOnboardingEULATable();

};

