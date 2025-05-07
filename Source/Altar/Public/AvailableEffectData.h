#pragma once
#include "CoreMinimal.h"
#include "AvailableEffectData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAvailableEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    ALTAR_API FAvailableEffectData();
};

