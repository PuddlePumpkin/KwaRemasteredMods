#pragma once
#include "CoreMinimal.h"
#include "ModernHelpMenuEntry.h"
#include "HelpEntryCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FHelpEntryCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FModernHelpMenuEntry> Data;
    
    ALTAR_API FHelpEntryCategoryData();
};

