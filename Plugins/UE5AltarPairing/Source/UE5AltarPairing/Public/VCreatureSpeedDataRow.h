#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VCreatureSpeedDataRow.generated.h"

USTRUCT(BlueprintType)
struct FVCreatureSpeedDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CreatureFormID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveRunMult;
    
    UE5ALTARPAIRING_API FVCreatureSpeedDataRow();
};

