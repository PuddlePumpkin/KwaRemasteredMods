#pragma once
#include "CoreMinimal.h"
#include "SerializedAltarSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSerializedAltarSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SaveDataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SerializedData;
    
    ALTAR_API FSerializedAltarSaveData();
};

