#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "VBaseCharacterAnimInstance.generated.h"

class AVPairedPawn;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBaseCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedPawn* PairedPawn;
    
public:
    UVBaseCharacterAnimInstance();

};

