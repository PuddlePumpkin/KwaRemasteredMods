#pragma once
#include "CoreMinimal.h"
#include "LegacyRechargeMenuSoulProperties.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLegacyRechargeMenuSoulProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SoulGemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SoulGemText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SoulLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoulPoints;
    
    ALTAR_API FLegacyRechargeMenuSoulProperties();
};

