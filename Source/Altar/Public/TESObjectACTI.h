#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESObjectACTI.generated.h"

class UAnimBlueprint;

UCLASS(Blueprintable)
class ALTAR_API UTESObjectACTI : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimBlueprint> PosePairingAnimBlueprint;
    
    UTESObjectACTI();

};

