#pragma once
#include "CoreMinimal.h"
#include "ECharacterSex.h"
#include "VSexAndRaceMapKey.generated.h"

class UTESRace;

USTRUCT(BlueprintType)
struct FVSexAndRaceMapKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSex Sex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTESRace> Race;
    
    ALTAR_API FVSexAndRaceMapKey();
};
FORCEINLINE uint32 GetTypeHash(const FVSexAndRaceMapKey) { return 0; }

