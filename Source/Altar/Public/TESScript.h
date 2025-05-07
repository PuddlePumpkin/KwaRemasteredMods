#pragma once
#include "CoreMinimal.h"
#include "EScriptType.h"
#include "TESForm.h"
#include "TESScript.generated.h"

UCLASS(Blueprintable, Transient)
class ALTAR_API UTESScript : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EScriptType> Type;
    
    UTESScript();

};

