#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELegacyBookStylizedTextAlignment.h"
#include "ELegacyBookTagType.h"
#include "LegacyBookTagProperties.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FLegacyBookTagProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TagText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyBookTagType TagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* FontObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyBookStylizedTextAlignment AlignmentValue;
    
    ALTAR_API FLegacyBookTagProperties();
};

