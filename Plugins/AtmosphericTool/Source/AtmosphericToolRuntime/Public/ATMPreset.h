#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ATMPreset.generated.h"

class UATMPreset;
class UMovieSceneSequence;

UCLASS(Blueprintable)
class ATMOSPHERICTOOLRUNTIME_API UATMPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSequence* PresetSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSequence* PresetSequenceHalfBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UATMPreset();

    UFUNCTION(BlueprintCallable)
    static TArray<UATMPreset*> GetExistingPresets();
    
};

