#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VideoTimestampTableRow.generated.h"

USTRUCT(BlueprintType)
struct FVideoTimestampTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    ALTAR_API FVideoTimestampTableRow();
};

