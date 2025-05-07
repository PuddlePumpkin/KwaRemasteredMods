#pragma once
#include "CoreMinimal.h"
#include "TESTextureList.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FTESTextureList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TextureCount;
    
    FTESTextureList();
};

