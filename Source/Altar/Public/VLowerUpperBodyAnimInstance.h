#pragma once
#include "CoreMinimal.h"
#include "VLayerCharacterAnimInstance.h"
#include "VLowerUpperBodyAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVLowerUpperBodyAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
public:
    UVLowerUpperBodyAnimInstance();

};

