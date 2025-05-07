#pragma once
#include "CoreMinimal.h"
#include "EquipUnequipSingleLayerData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FEquipUnequipSingleLayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EquipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* UnequipAnim;
    
    ALTAR_API FEquipUnequipSingleLayerData();
};

