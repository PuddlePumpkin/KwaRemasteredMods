#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputText.h"
#include "IconSelectionTableRow.generated.h"

USTRUCT(BlueprintType)
struct FIconSelectionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputText InputText;
    
    ALTAR_API FIconSelectionTableRow();
};

