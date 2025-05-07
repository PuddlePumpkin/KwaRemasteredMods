#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVModernRebindType.h"
#include "ModernPairedRebindData.h"
#include "ModernRebindData.h"
#include "ModernRebindSettingTableRow.generated.h"

USTRUCT(BlueprintType)
struct FModernRebindSettingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVModernRebindType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernRebindData RebindData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernPairedRebindData PairedRebindData;
    
    ALTAR_API FModernRebindSettingTableRow();
};

