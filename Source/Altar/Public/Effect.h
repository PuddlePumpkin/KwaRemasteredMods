#pragma once
#include "CoreMinimal.h"
#include "EActorValue.h"
#include "EEffectID.h"
#include "ERange.h"
#include "ScriptEffectItemData.h"
#include "Effect.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EEffectID EffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERange Range;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorValue ActorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptEffectItemData ScriptEffectData;
    
    FEffect();
};

