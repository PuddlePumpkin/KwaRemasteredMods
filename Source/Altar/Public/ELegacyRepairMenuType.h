#pragma once
#include "CoreMinimal.h"
#include "ELegacyRepairMenuType.generated.h"

UENUM(BlueprintType)
enum class ELegacyRepairMenuType : uint8 {
    Repair = 1,
    Repair_Buy,
    Alchemy_Select,
    Enchantement_Select,
    Soulgem_Select,
    Sigilstone_Select,
    None = 0,
};

