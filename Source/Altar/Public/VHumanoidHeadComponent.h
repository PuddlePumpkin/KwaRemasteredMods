#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "UObject/NoExportTypes.h"
#include "CharacterHairPieceBaseConstructResult.h"
#include "DialogueEmotion.h"
#include "EVFacialHairType.h"
#include "VHumanoidHeadComponent.generated.h"

class USkeletalMeshComponent;
class UVCharacterPhenotypeData;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVHumanoidHeadComponent : public USkeletalMeshComponentBudgeted {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHairComponentsInstantiated, UVCharacterPhenotypeData*, Phenotype);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBodyMeshUpdated, USkeletalMeshComponent*, NewBodyMesh);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHairComponentsInstantiated OnHairComponentsInstantiated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBodyMeshUpdated OnBodyMeshUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLookingAtTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentEyeHeading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentEyePitch;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVFacialHairType, FCharacterHairPieceBaseConstructResult> HairComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> BodyMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHideHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHideFacialHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueEmotion CurrentEmotion;
    
public:
    UVHumanoidHeadComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShouldHideHair(bool bInShouldHideHair, bool bInHideFacialHair);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityOfFacialHair(EVFacialHairType FacialHair, bool bIsHairVisible);
    
    UFUNCTION(BlueprintCallable)
    void InstantiateHairComponents(UVCharacterPhenotypeData* Phenotype);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDialogueEmotion GetEmotion() const;
    
};

