#pragma once
#include "CoreMinimal.h"
#include "NiTimeController.h"
#include "NiInterpController.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiInterpController : public UNiTimeController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ManagerControlled;
    
    UNiInterpController();

};

