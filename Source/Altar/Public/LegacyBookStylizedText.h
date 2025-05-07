#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELegacyBookStylizedTextAlignment.h"
#include "LegacyBookStylizedText.generated.h"

USTRUCT(BlueprintType)
struct FLegacyBookStylizedText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyBookStylizedTextAlignment Alignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FontValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    ALTAR_API FLegacyBookStylizedText();
};

