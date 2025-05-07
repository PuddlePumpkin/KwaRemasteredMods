#pragma once
#include "CoreMinimal.h"
#include "VRecoil.h"
#include "VRecoilCharacterAnimInstance.h"
#include "VRecoilSingleCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVRecoilSingleCharacterAnimInstance : public UVRecoilCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVRecoil AnimSet;
    
public:
    UVRecoilSingleCharacterAnimInstance();

};

