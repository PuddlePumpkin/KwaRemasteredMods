#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "VAnimNotify_JumpNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ALTAR_API UVAnimNotify_JumpNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearJumpInputTagOnNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalJumpHeightMultiplier;
    
public:
    UVAnimNotify_JumpNotify();

};

