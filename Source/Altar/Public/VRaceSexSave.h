#pragma once
#include "CoreMinimal.h"
#include "VBaseUIGameSaveData.h"
#include "VRaceSexSave.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVRaceSexSave : public UVBaseUIGameSaveData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentArchetype;
    
public:
    UVRaceSexSave();

};

