#pragma once
#include "CoreMinimal.h"
#include "NiKeyframeController.h"
#include "BSKeyframeController.generated.h"

class UNiKeyframeData;

UCLASS(Blueprintable)
class ALTAR_API UBSKeyframeController : public UNiKeyframeController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiKeyframeData* Data2;
    
    UBSKeyframeController();

};

