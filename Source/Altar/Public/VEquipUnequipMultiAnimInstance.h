#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "EquipUnequipMultiLayerData.h"
#include "VEquipUnequipCharacterAnimInstance.h"
#include "VEquipUnequipMultiAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVEquipUnequipMultiAnimInstance : public UVEquipUnequipCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipUnequipMultiLayerData LayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EquipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* UnequipAnim;
    
public:
    UVEquipUnequipMultiAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUnEquipEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
};

