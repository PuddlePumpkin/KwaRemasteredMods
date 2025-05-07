#pragma once
#include "CoreMinimal.h"
#include "LegacyEffectsItemProperties.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLegacyEffectsItemProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
    ALTAR_API FLegacyEffectsItemProperties();
};

