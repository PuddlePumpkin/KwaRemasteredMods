#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "OriginalVideoOption.h"
#include "Templates/SubclassOf.h"
#include "OriginalVideoTableRow.generated.h"

class UVOriginalVideoSettingWidget;

USTRUCT(BlueprintType)
struct FOriginalVideoTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVOriginalVideoSettingWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOriginalVideoOption> OptionValues;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ExtremalValue;
    
    ALTAR_API FOriginalVideoTableRow();
};

