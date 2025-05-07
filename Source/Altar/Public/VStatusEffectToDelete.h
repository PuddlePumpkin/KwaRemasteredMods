#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VStatusEffectToDelete.generated.h"

UCLASS(Blueprintable)
class UVStatusEffectToDelete : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FormID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasToKillAllInstance;
    
    UVStatusEffectToDelete();

};

