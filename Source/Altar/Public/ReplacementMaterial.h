#pragma once
#include "CoreMinimal.h"
#include "ReplacementMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FReplacementMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    ALTAR_API FReplacementMaterial();
};

