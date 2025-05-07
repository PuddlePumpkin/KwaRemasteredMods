#pragma once
#include "CoreMinimal.h"
#include "ModernRepairMenuCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FModernRepairMenuCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldAmount;
    
    ALTAR_API FModernRepairMenuCharacterData();
};

