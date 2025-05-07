#pragma once
#include "CoreMinimal.h"
#include "NiSingleInterpController.h"
#include "NiKeyframeController.generated.h"

class UNiKeyframeData;

UCLASS(Blueprintable)
class ALTAR_API UNiKeyframeController : public UNiSingleInterpController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiKeyframeData* Data;
    
    UNiKeyframeController();

};

