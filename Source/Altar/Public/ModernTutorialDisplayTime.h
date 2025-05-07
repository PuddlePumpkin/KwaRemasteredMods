#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModernTutorialDisplayTime.generated.h"

USTRUCT(BlueprintType)
struct FModernTutorialDisplayTime : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    ALTAR_API FModernTutorialDisplayTime();
};

