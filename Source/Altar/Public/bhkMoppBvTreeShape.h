#pragma once
#include "CoreMinimal.h"
#include "bhkBvTreeShape.h"
#include "bhkMoppBvTreeShape.generated.h"

class UhkpMoppCode;

UCLASS(Blueprintable)
class ALTAR_API UbhkMoppBvTreeShape : public UbhkBvTreeShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UhkpMoppCode* MoppCode;
    
    UbhkMoppBvTreeShape();

};

