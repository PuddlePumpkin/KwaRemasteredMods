#pragma once
#include "CoreMinimal.h"
#include "ESPDataProperty.h"
#include "VFormPtr.h"
#include "Enchantment.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FEnchantment : public FESPDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFormPtr EnchantmentForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfEnchantment;
    
    FEnchantment();
};

