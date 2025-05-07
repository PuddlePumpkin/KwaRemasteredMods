#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VEquipUnequipCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVEquipUnequipCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVEquipUnequipCharacterAnimInstanceProxy();
};

