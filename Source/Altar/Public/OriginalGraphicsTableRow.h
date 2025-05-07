#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "OriginalGraphicsOption.h"
#include "Templates/SubclassOf.h"
#include "OriginalGraphicsTableRow.generated.h"

class UVOriginalVideoSettingWidget;

USTRUCT(BlueprintType)
struct FOriginalGraphicsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVOriginalVideoSettingWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOriginalGraphicsOption> OptionValues;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ExtremalValue;
    
    ALTAR_API FOriginalGraphicsTableRow();
};

