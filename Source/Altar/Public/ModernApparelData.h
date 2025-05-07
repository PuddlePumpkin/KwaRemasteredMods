#pragma once
#include "CoreMinimal.h"
#include "ModernApparelData.generated.h"

USTRUCT(BlueprintType)
struct FModernApparelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsApparelAboutToBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsApparelBroken;
    
    ALTAR_API FModernApparelData();
};

