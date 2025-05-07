#pragma once
#include "CoreMinimal.h"
#include "InputText.generated.h"

USTRUCT(BlueprintType)
struct FInputText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ControllerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KeyboardText;
    
    ALTAR_API FInputText();
};

