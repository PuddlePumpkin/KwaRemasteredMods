#pragma once
#include "CoreMinimal.h"
#include "EOriginalInventoryMenuWeaponSkillAndSize.generated.h"

UENUM(BlueprintType)
enum class EOriginalInventoryMenuWeaponSkillAndSize : uint8 {
    Blade_One_Hand,
    Blade_Two_Hand,
    Blunt_One_Hand,
    Blunt_Two_Hand,
    Staff,
    Bow,
};

