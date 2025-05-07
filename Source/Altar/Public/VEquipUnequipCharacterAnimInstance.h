#pragma once
#include "CoreMinimal.h"
#include "VLayerCharacterAnimInstance.h"
#include "VEquipUnequipCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVEquipUnequipCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEquipRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasUnequipRequest;
    
public:
    UVEquipUnequipCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStanding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSneaking() const;
    
};

