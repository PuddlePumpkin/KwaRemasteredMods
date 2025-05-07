#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "VAnimNotifyState_ImpactSystem.generated.h"

class UStaticMeshComponent;
class UStaticMeshSocket;
class UVHitBoxComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UVAnimNotifyState_ImpactSystem : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneNameUsedToAttack;
    
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UVHitBoxComponent>> HitBoxList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStaticMeshComponent> StaticMeshWeaponComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStaticMeshSocket> WeaponSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WantedDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BloodWantedDirection;
    
public:
    UVAnimNotifyState_ImpactSystem();

};

