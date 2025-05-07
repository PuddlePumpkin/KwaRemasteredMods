#pragma once
#include "CoreMinimal.h"
#include "NiSingleInterpController.h"
#include "NifString.h"
#include "NiPSysModifierCtlr.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiPSysModifierCtlr : public UNiSingleInterpController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString Name;
    
    UNiPSysModifierCtlr();

};

