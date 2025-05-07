#pragma once
#include "CoreMinimal.h"
#include "VRecoilCharacterAnimInstance.h"
#include "VRecoilMultiple.h"
#include "VRecoilMultipleCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVRecoilMultipleCharacterAnimInstance : public UVRecoilCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVRecoilMultiple AnimSet;
    
public:
    UVRecoilMultipleCharacterAnimInstance();

};

