#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGenericInputActionData.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FVGenericInputActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayInActionBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInputEvent> KeyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPersistent;
    
    VCOMMONUIENHANCEDINPUTNAVIGATION_API FVGenericInputActionData();
};

