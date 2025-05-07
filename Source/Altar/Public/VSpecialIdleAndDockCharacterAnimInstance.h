#pragma once
#include "CoreMinimal.h"
#include "VLayerCharacterAnimInstance.h"
#include "VSpecialIdleAndDockData.h"
#include "VSpecialIdleAndDockCharacterAnimInstance.generated.h"

class UAnimMontage;
class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVSpecialIdleAndDockCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVSpecialIdleAndDockData LayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpecialIdleSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSpecialIdleWhileDocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLayerActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHoldingTorch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DockedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentSpecialIdleMontage;
    
public:
    UVSpecialIdleAndDockCharacterAnimInstance();

};

