#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HitReactionKeyframeData.h"
#include "VHitReactionAnimInstance.h"
#include "VHitReactionKeyframeAnimInstance.generated.h"

class UBlendSpace;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVHitReactionKeyframeAnimInstance : public UVHitReactionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitReactionKeyframeData AnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* CurrentBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaVariance;
    
public:
    UVHitReactionKeyframeAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayHitReaction() const;
    
};

