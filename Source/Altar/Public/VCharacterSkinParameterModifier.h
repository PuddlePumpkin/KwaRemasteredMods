#pragma once
#include "CoreMinimal.h"
#include "VCharacterSkinParameterModifier.generated.h"

USTRUCT(BlueprintType)
struct FVCharacterSkinParameterModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampMax;
    
    ALTAR_API FVCharacterSkinParameterModifier();
};

