#pragma once
#include "CoreMinimal.h"
#include "NiTimeController.h"
#include "bhkBlendController.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UbhkBlendController : public UNiTimeController {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Keys;
    
    UbhkBlendController();

};

