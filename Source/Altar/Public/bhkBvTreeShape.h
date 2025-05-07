#pragma once
#include "CoreMinimal.h"
#include "bhkShape.h"
#include "bhkBvTreeShape.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UbhkBvTreeShape : public UbhkShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkShape* Shape;
    
    UbhkBvTreeShape();

};

