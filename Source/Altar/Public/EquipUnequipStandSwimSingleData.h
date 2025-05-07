#pragma once
#include "CoreMinimal.h"
#include "EquipUnequipStandSwimSingleData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FEquipUnequipStandSwimSingleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EquipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* UnequipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SwimEquipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SwimUnequipAnim;
    
    ALTAR_API FEquipUnequipStandSwimSingleData();
};

