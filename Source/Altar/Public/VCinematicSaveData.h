#pragma once
#include "CoreMinimal.h"
#include "EVCinematicType.h"
#include "VAltarCinematicState.h"
#include "VBaseAltarSaveData.h"
#include "VCinematicSaveData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVCinematicSaveData : public UVBaseAltarSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EVCinematicType, FVAltarCinematicState> CinematicsStates;
    
    UVCinematicSaveData();

};

