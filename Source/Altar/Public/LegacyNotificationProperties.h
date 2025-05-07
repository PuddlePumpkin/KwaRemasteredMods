#pragma once
#include "CoreMinimal.h"
#include "LegacyNotificationProperties.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLegacyNotificationProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsQuest;
    
    ALTAR_API FLegacyNotificationProperties();
};

