#pragma once
#include "CoreMinimal.h"
#include "VStagger.h"
#include "VStaggerCharacterAnimInstance.h"
#include "VStaggerStandCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVStaggerStandCharacterAnimInstance : public UVStaggerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVStagger AnimSet;
    
public:
    UVStaggerStandCharacterAnimInstance();

};

