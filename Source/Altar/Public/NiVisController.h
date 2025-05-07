#pragma once
#include "CoreMinimal.h"
#include "NiBoolInterpController.h"
#include "NiVisController.generated.h"

class UNiVisData;

UCLASS(Blueprintable)
class ALTAR_API UNiVisController : public UNiBoolInterpController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiVisData* Data;
    
    UNiVisController();

};

