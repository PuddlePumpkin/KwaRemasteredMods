#pragma once
#include "CoreMinimal.h"
#include "EModalMenuLayoutType.generated.h"

UENUM(BlueprintType)
enum class EModalMenuLayoutType : uint8 {
    Default,
    QuestAdded,
    QuestUpdated,
    SkillIncreased,
    OutOfPrison,
    SellBuy,
    LoadSave,
    RaceSex,
    Recharge,
    Repair,
};

