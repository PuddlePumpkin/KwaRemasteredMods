#pragma once
#include "CoreMinimal.h"
#include "EOriginalInventoryMenuBookType.generated.h"

UENUM(BlueprintType)
enum class EOriginalInventoryMenuBookType : uint8 {
    Book,
    Scroll,
    Skill_Book,
    Spell_Scroll,
    None,
};

