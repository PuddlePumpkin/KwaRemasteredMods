#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "VOblivionCreatureAnimInstance.generated.h"

class UVAnimationPairingComponent;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVOblivionCreatureAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAnimationPairingComponent* LinkedAnimationPairingComponent;
    
public:
    UVOblivionCreatureAnimInstance();

};

