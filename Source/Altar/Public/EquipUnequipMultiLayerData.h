#pragma once
#include "CoreMinimal.h"
#include "EquipUnequipMultiLayerData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FEquipUnequipMultiLayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> EquipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> UnequipAnim;
    
    ALTAR_API FEquipUnequipMultiLayerData();
};

