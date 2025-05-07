#pragma once
#include "CoreMinimal.h"
#include "StatusEffectAnimationSettings.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FStatusEffectAnimationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
    FStatusEffectAnimationSettings();
};

