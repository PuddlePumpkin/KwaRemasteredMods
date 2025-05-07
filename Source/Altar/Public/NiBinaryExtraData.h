#pragma once
#include "CoreMinimal.h"
#include "ByteArray.h"
#include "NiExtraData.h"
#include "NiBinaryExtraData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiBinaryExtraData : public UNiExtraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FByteArray BinaryData;
    
    UNiBinaryExtraData();

};

