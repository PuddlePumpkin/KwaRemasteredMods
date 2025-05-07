#pragma once
#include "CoreMinimal.h"
#include "SoulGemInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSoulGemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Power;
    
    ALTAR_API FSoulGemInfo();
};

