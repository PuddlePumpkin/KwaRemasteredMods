#pragma once
#include "CoreMinimal.h"
#include "FooterInputActionVisibility.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FFooterInputActionVisibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    ALTAR_API FFooterInputActionVisibility();
};

