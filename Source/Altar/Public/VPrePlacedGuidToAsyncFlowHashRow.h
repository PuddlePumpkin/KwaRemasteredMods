#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "VPrePlacedGuidToAsyncFlowHashRow.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVPrePlacedGuidToAsyncFlowHashRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CellNameForAsyncFlow;
    
    FVPrePlacedGuidToAsyncFlowHashRow();
};

