#pragma once
#include "CoreMinimal.h"
#include "VBaseAltarSaveData.h"
#include "VPhysicsControllableState.h"
#include "VPhysicsSaveData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVPhysicsSaveData : public UVBaseAltarSaveData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<uint32, FVPhysicsControllableState> PhysicsControllablesStates;
    
public:
    UVPhysicsSaveData();

};

