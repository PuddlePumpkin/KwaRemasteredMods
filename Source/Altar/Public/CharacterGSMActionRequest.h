#pragma once
#include "CoreMinimal.h"
#include "CharacterGSMActionRequest.generated.h"

USTRUCT(BlueprintType)
struct FCharacterGSMActionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionAnimIndex;
    
    ALTAR_API FCharacterGSMActionRequest();
};

