#pragma once
#include "CoreMinimal.h"
#include "VAltarSettings.generated.h"

USTRUCT(BlueprintType)
struct FVAltarSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    ALTAR_API FVAltarSettings();
};

