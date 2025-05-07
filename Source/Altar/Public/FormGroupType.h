#pragma once
#include "CoreMinimal.h"
#include "FormGroupType.generated.h"

UENUM(BlueprintType)
enum class FormGroupType : uint8 {
    FGT_TYPE,
    FGT_WORLDCHILD,
    FGT_INTCELLBLOCK,
    FGT_INTCELLSUBBLOCK,
    FGT_EXTCELLBLOCK,
    FGT_EXTCELLSUBBLOCK,
    FGT_CELLCHILD,
    FGT_TOPICCHILD,
    FGT_PERSISTENTCHILD,
    FGT_TEMPCHILD,
    FGT_DISTANTCHILD,
};

