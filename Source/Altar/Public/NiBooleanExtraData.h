#pragma once
#include "CoreMinimal.h"
#include "NiExtraData.h"
#include "NiBooleanExtraData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiBooleanExtraData : public UNiExtraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BooleanData;
    
    UNiBooleanExtraData();

};

