#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Modern_StatMenuLevelTableRow.generated.h"

USTRUCT(BlueprintType)
struct FModern_StatMenuLevelTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    ALTAR_API FModern_StatMenuLevelTableRow();
};

