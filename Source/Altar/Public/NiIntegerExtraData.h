#pragma once
#include "CoreMinimal.h"
#include "NiExtraData.h"
#include "NiIntegerExtraData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiIntegerExtraData : public UNiExtraData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 IntegerData;
    
    UNiIntegerExtraData();

};

