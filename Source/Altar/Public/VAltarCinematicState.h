#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VAltarCinematicState.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVAltarCinematicState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime CinematicFrameTime;
    
    FVAltarCinematicState();
};

