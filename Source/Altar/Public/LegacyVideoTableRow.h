#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELegacyVideoMenuOptionType.h"
#include "FLegacyVideoSettingsEnum.h"
#include "Templates/SubclassOf.h"
#include "LegacyVideoTableRow.generated.h"

class UVLegacyVideoWidgetBase;

USTRUCT(BlueprintType)
struct FLegacyVideoTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyVideoSettingsEnum Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVLegacyVideoWidgetBase> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyVideoMenuOptionType OptionType;
    
    ALTAR_API FLegacyVideoTableRow();
};

