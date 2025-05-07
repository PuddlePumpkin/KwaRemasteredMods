#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "EquipUnequipSingleLayerData.h"
#include "VEquipUnequipCharacterAnimInstance.h"
#include "VEquipUnequipSingleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVEquipUnequipSingleAnimInstance : public UVEquipUnequipCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipUnequipSingleLayerData LayerData;
    
public:
    UVEquipUnequipSingleAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUnEquipEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
};

