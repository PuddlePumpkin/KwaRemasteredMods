#pragma once
#include "CoreMinimal.h"
#include "ArrowsSocketStatus.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FArrowsSocketStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EquippedArrow;
    
    ALTAR_API FArrowsSocketStatus();
};

