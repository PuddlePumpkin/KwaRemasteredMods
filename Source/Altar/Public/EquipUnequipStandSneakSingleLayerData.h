#pragma once
#include "CoreMinimal.h"
#include "EquipUnequipStandSneakSingleLayerData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FEquipUnequipStandSneakSingleLayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EquipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* UnequipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SneakEquipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SneakUnequipAnim;
    
    ALTAR_API FEquipUnequipStandSneakSingleLayerData();
};

