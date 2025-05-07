#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVBossCategory.h"
#include "VBossDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVBossDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EditorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVBossCategory Category;
    
    FVBossDataTableRow();
};

