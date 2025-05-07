#pragma once
#include "CoreMinimal.h"
#include "NiPSysModifier.h"
#include "NiPSysAgeDeathModifier.generated.h"

class UNiPSysSpawnModifier;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysAgeDeathModifier : public UNiPSysModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiPSysSpawnModifier* SpawnModifier;
    
    UNiPSysAgeDeathModifier();

};

