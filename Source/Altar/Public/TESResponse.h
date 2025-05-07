#pragma once
#include "CoreMinimal.h"
#include "VResponseKey.h"
#include "TESResponse.generated.h"

class UAkAudioEvent;
class UAnimSequence;
class USoundWave;

USTRUCT(BlueprintType)
struct ALTAR_API FTESResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResponseID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, TSoftObjectPtr<USoundWave>> Audios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVResponseKey, TSoftObjectPtr<UAkAudioEvent>> AkAudioEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVResponseKey, TSoftObjectPtr<UAnimSequence>> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> Animation;
    
    FTESResponse();
};

