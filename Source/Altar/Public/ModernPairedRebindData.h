#pragma once
#include "CoreMinimal.h"
#include "ModernPairedRebindData.generated.h"

class UInputAction;
class UInputMappingContext;

USTRUCT(BlueprintType)
struct FModernPairedRebindData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* MappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    ALTAR_API FModernPairedRebindData();
};

