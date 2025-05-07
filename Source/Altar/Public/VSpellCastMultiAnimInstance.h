#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "SpellCastMultiAnimSet.h"
#include "VLayerCharacterAnimInstance.h"
#include "VSpellCastMultiAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVSpellCastMultiAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpellCastMultiAnimSet AnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CastTargetLeftAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CastTargetRightAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CastSelfLeftAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CastSelfRightAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CastTouchLeftAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CastTouchRightAnim;
    
public:
    UVSpellCastMultiAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCastTouchRightEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCastTouchLeftEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCastTargetLeftEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCastTargeRightEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCastSelfRightEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCastSelfLeftEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
};

