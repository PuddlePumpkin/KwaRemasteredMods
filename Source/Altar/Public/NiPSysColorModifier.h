#pragma once
#include "CoreMinimal.h"
#include "NiPSysModifier.h"
#include "NiPSysColorModifier.generated.h"

class UNiColorData;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysColorModifier : public UNiPSysModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiColorData* ColorData;
    
    UNiPSysColorModifier();

};

