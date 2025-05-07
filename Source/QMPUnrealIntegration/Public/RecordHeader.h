#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RecordHeader.generated.h"

USTRUCT(BlueprintType)
struct FRecordHeader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGodModeAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastChunkCompressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan RecordDuration;
    
    QMPUNREALINTEGRATION_API FRecordHeader();
};

