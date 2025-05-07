#pragma once
#include "CoreMinimal.h"
#include "LegacyMenuActionBinding.h"
#include "ModernQuickKeysActionBinding.generated.h"

USTRUCT(BlueprintType)
struct FModernQuickKeysActionBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMenuActionBinding PressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMenuActionBinding ReleaseData;
    
    ALTAR_API FModernQuickKeysActionBinding();
};

