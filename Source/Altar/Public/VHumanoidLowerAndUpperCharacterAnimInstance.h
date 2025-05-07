#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "VHumanoidLowerAndUpperBodySetup.h"
#include "VLayerCharacterAnimInstance.h"
#include "VHumanoidLowerAndUpperCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVHumanoidLowerAndUpperCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVHumanoidLowerAndUpperBodySetup TurnInPlaceBlendSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MovingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RecoilTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DedicatedSneakActionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LeftArmCastingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LandCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftCastAnchorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightCastAnchorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMovingOrRecoiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDedicatedSneakAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaffAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MagicNodePosition;
    
public:
    UVHumanoidLowerAndUpperCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingBow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSneaking() const;
    
};

