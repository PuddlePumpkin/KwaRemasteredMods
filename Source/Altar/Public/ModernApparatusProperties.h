#pragma once
#include "CoreMinimal.h"
#include "EVApparatusType.h"
#include "ModernApparatusProperties.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FModernApparatusProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVApparatusType ApparatusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QualityLevel;
    
    ALTAR_API FModernApparatusProperties();
};

