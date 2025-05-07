#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NiVisData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiVisData : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumKeys;
    
    UNiVisData();

};

