#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FormID.h"
#include "VInventoryPreviewPositionOverride.h"
#include "VPreviewDefaultLocationRotationTableRow.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVPreviewDefaultLocationRotationTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FormID FormType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVInventoryPreviewPositionOverride DefaultParameters;
    
    FVPreviewDefaultLocationRotationTableRow();
};

