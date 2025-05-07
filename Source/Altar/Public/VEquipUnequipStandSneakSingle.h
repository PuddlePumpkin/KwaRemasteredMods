#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "EquipUnequipStandSneakSingleLayerData.h"
#include "VEquipUnequipCharacterAnimInstance.h"
#include "VEquipUnequipStandSneakSingle.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVEquipUnequipStandSneakSingle : public UVEquipUnequipCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EquipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* UnequipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipUnequipStandSneakSingleLayerData LayerData;
    
public:
    UVEquipUnequipStandSneakSingle();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUnEquipEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
};

