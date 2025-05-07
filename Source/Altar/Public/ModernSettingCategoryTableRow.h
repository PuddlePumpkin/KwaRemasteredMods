#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModernSettingCategoryTableRow.generated.h"

class UVModernSettingTable;

USTRUCT(BlueprintType)
struct FModernSettingCategoryTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVModernSettingTable* Settings;
    
    ALTAR_API FModernSettingCategoryTableRow();
};

