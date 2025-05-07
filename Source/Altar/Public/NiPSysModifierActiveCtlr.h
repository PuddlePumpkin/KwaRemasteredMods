#pragma once
#include "CoreMinimal.h"
#include "NiPSysModifierBoolCtlr.h"
#include "NiPSysModifierActiveCtlr.generated.h"

class UNiVisData;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysModifierActiveCtlr : public UNiPSysModifierBoolCtlr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiVisData* Data;
    
    UNiPSysModifierActiveCtlr();

};

