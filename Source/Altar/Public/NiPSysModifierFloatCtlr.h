#pragma once
#include "CoreMinimal.h"
#include "NiPSysModifierCtlr.h"
#include "NiPSysModifierFloatCtlr.generated.h"

class UNiFloatData;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysModifierFloatCtlr : public UNiPSysModifierCtlr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiFloatData* Data;
    
    UNiPSysModifierFloatCtlr();

};

