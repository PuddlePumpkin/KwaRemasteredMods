#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstance.h"
#include "VHumanoidHeadCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVHumanoidHeadCharacterAnimInstance : public UVBaseCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EyeBoneName_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EyeBoneName_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyesPitchRangeInDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyesHeadingRangeInDegree;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmotionBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeHeadingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeHeadingBias;
    
public:
    UVHumanoidHeadCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSurprised() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeutral() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHappy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFearful() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisgusted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConscious() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAngry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEyePitchValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEyeHeadingValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEmotionBlendValue() const;
    
};

