#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstance.h"
#include "VHorseAccessoryAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class UVHorseAccessoryAnimInstance : public UVBaseCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainSkeletalMeshComponent;
    
    UVHorseAccessoryAnimInstance();

};

