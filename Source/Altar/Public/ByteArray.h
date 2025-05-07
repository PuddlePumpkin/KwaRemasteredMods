#pragma once
#include "CoreMinimal.h"
#include "ByteArray.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FByteArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DataSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    FByteArray();
};

