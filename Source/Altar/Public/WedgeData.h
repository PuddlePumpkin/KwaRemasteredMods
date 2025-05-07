#pragma once
#include "CoreMinimal.h"
#include "EPersuade.h"
#include "EReaction.h"
#include "WedgeData.generated.h"

USTRUCT(BlueprintType)
struct FWedgeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReaction PnjReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPersuade PersuasionStrategy;
    
    ALTAR_API FWedgeData();
};

