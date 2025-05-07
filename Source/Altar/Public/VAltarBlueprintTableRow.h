#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VAltarBlueprintTableRow.generated.h"

class UVModdableBlueprint;

USTRUCT(BlueprintType)
struct ALTAR_API FVAltarBlueprintTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FormID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVModdableBlueprint> Blueprint;
    
    FVAltarBlueprintTableRow();
};

