#pragma once
#include "CoreMinimal.h"
#include "LegacyBookStylizedText.h"
#include "LegacyBookProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyBookProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyBookStylizedText> FormatedBookText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeTaken;
    
    ALTAR_API FLegacyBookProperties();
};

