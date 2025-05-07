#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ATMBlendingPolicy.generated.h"

UCLASS(Blueprintable)
class UATMBlendingPolicy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ColorBlendingRGB;
    
    UATMBlendingPolicy();

};

