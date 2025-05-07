#pragma once
#include "CoreMinimal.h"
#include "ESettingCommandOuput.generated.h"

UENUM(BlueprintType)
enum class ESettingCommandOuput : uint8 {
    HasChange,
    IsSame,
    Invalid,
};

