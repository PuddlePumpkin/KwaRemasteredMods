#pragma once
#include "CoreMinimal.h"
#include "ResponsesData.generated.h"

USTRUCT(BlueprintType)
struct FResponsesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ResponseText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResponseID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNewResponse;
    
    ALTAR_API FResponsesData();
};

