#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EFacialPoseType.h"
#include "Templates/SubclassOf.h"
#include "VAnimNotifyState_FacialPose.generated.h"

class AActor;
class UVFacialCharacterAnimInstance;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UVAnimNotifyState_FacialPose : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacialPoseType FacialPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacialPoseBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVFacialCharacterAnimInstance> FacialAnimInstanceClass;
    
public:
    UVAnimNotifyState_FacialPose();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFacialPose(const AActor* OwnerActor, const EFacialPoseType AnimNotifyFacialPose, const float AnimNotifyBlendWeight, const bool bShouldOverrideFacialPose, const bool bIsAnimNotifyBegin) const;
    
};

