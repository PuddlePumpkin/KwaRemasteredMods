#pragma once
#include "CoreMinimal.h"
#include "TurnInPlaceAnimSet.h"
#include "TurnInPlaceFP.generated.h"

USTRUCT(BlueprintType)
struct FTurnInPlaceFP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurnInPlaceAnimSet StandingSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurnInPlaceAnimSet SneakingSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurnInPlaceAnimSet SwimmingSet;
    
    ALTAR_API FTurnInPlaceFP();
};

