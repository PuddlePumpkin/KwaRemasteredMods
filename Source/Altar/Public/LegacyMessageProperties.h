#pragma once
#include "CoreMinimal.h"
#include "EModalMenuLayoutType.h"
#include "LegacyMessageProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyMessageProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModalMenuLayoutType MenuType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ButtonText;
    
    ALTAR_API FLegacyMessageProperties();
};

