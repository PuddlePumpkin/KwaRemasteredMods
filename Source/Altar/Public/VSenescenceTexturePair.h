#pragma once
#include "CoreMinimal.h"
#include "VSenescenceTexturePair.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVSenescenceTexturePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    ALTAR_API FVSenescenceTexturePair();
};

