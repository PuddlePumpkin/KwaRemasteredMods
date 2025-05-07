#pragma once
#include "CoreMinimal.h"
#include "VBaseAltarSaveData.h"
#include "VVelocityAndFallTimerMovementData.h"
#include "VMovementSaveData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVMovementSaveData : public UVBaseAltarSaveData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<uint32, FVVelocityAndFallTimerMovementData> VelocityAndFallTimerMovementData;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<uint32, bool> IsSneakingMovementData;
    
public:
    UVMovementSaveData();

};

