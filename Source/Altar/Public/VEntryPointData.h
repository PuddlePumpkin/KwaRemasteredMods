#pragma once
#include "CoreMinimal.h"
#include "VEntryPointData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FVEntryPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MountingAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DismountingAnimSequence;
    
    ALTAR_API FVEntryPointData();
};

