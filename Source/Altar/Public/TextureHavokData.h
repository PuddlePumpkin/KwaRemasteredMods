#pragma once
#include "CoreMinimal.h"
#include "TextureHavokData.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FTextureHavokData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaterialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Friction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Restitution;
    
    FTextureHavokData();
};

