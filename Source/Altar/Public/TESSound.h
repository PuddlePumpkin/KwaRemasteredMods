#pragma once
#include "CoreMinimal.h"
#include "TESBoundAnimObject.h"
#include "TESSoundData.h"
#include "TESSound.generated.h"

class USoundWave;

UCLASS(Blueprintable)
class ALTAR_API UTESSound : public UTESBoundAnimObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTESSoundData SoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundWave>> SoundWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundPath;
    
    UTESSound();

};

