#pragma once
#include "CoreMinimal.h"
#include "LegacyMenuActionBinding.h"
#include "LegacyQuickKeysActionBinding.generated.h"

USTRUCT(BlueprintType)
struct FLegacyQuickKeysActionBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMenuActionBinding PressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMenuActionBinding ReleaseData;
    
    ALTAR_API FLegacyQuickKeysActionBinding();
};

