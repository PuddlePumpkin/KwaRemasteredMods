#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "VHorseLocomotionData.h"
#include "VLocomotionHorseAnimInstance.h"
#include "VGroundLocomotionHorseAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class UVGroundLocomotionHorseAnimInstance : public UVLocomotionHorseAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInSpecialIdle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HalfFloorRaycastNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaycastLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlopeNormalInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVHorseLocomotionData AnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DefaultIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CurrentSpecialIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> SpecialIdleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinIdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowestHorseAnimationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastestHorseAnimationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackwardHorseAnimationSpeed;
    
public:
    UVGroundLocomotionHorseAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void ProcessSpecialIdleTransitionLogic(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ProcessIdleTransitionLogic(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateIdleState(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialIdleExit(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocomotionPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSpecialIdleIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlaySpecialIdle() const;
    
};

