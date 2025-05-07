#pragma once
#include "CoreMinimal.h"
#include "TESForm.h"
#include "TESIdleForm.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class ALTAR_API UTESIdleForm : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OriginalPath;
    
    UTESIdleForm();

};

