#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WwiseExternalSourceMediaInfo.generated.h"

USTRUCT(BlueprintType)
struct WWISESIMPLEEXTERNALSOURCE_API FWwiseExternalSourceMediaInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ExternalSourceMediaInfoId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MediaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CodecID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsStreamed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseDeviceMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MemoryAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PrefetchSize;
    
    FWwiseExternalSourceMediaInfo();
};

