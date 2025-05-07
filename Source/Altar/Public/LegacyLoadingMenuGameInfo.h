#pragma once
#include "CoreMinimal.h"
#include "LegacyLoadingMenuGameInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLegacyLoadingMenuGameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LoadingTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LoadingText;
    
    ALTAR_API FLegacyLoadingMenuGameInfo();
};

