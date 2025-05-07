#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VBaseAltarSaveData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVBaseAltarSaveData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 Version;
    
    UVBaseAltarSaveData();

};

