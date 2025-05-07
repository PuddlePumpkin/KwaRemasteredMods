#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "VOblivionPosePairingAnimInstance.generated.h"

class UVAnimationObjectPairingComponent;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVOblivionPosePairingAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAnimationObjectPairingComponent* LinkedAnimationObjectPairingComponent;
    
public:
    UVOblivionPosePairingAnimInstance();

};

