#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "VAnimNotify_PlayWwiseSound.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class ALTAR_API UVAnimNotify_PlayWwiseSound : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachName;
    
public:
    UVAnimNotify_PlayWwiseSound();

};

