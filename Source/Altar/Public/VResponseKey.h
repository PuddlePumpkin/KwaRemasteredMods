#pragma once
#include "CoreMinimal.h"
#include "ECharacterSex.h"
#include "EVVoiceType.h"
#include "VResponseKey.generated.h"

class UTESRace;

USTRUCT(BlueprintType)
struct FVResponseKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSex Sex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTESRace> Race;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVVoiceType VoiceType;
    
    ALTAR_API FVResponseKey();
};
FORCEINLINE uint32 GetTypeHash(const FVResponseKey) { return 0; }

