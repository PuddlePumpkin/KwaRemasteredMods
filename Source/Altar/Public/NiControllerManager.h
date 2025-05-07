#pragma once
#include "CoreMinimal.h"
#include "NiTimeController.h"
#include "NiControllerManager.generated.h"

class UNiControllerSequence;
class UNiDefaultAVObjectPalette;

UCLASS(Blueprintable)
class ALTAR_API UNiControllerManager : public UNiTimeController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Cumulative;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumControllerSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiControllerSequence*> ControllerSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiDefaultAVObjectPalette* ObjectPalette;
    
    UNiControllerManager();

};

