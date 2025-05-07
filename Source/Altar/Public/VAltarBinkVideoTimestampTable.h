#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VideoTimestampTableRow.h"
#include "VAltarBinkVideoTimestampTable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarBinkVideoTimestampTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVideoTimestampTableRow> TimeStamps;
    
public:
    UVAltarBinkVideoTimestampTable();

};

