#pragma once
#include "CoreMinimal.h"
#include "LegacySpellPurchaseMenuNPCData.generated.h"

USTRUCT(BlueprintType)
struct FLegacySpellPurchaseMenuNPCData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NpcGold;
    
    ALTAR_API FLegacySpellPurchaseMenuNPCData();
};

