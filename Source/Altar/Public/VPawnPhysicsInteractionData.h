#pragma once
#include "CoreMinimal.h"
#include "VPawnPhysicsInteractionData.generated.h"

class AVPairedPawn;

USTRUCT(BlueprintType)
struct ALTAR_API FVPawnPhysicsInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVPairedPawn> PawnA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVPairedPawn> PawnB;
    
    FVPawnPhysicsInteractionData();
};

