#pragma once
#include "CoreMinimal.h"
#include "FooterInputActionDescription.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FFooterInputActionDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    ALTAR_API FFooterInputActionDescription();
};

