#pragma once
#include "CoreMinimal.h"
#include "EBipedModularBodySlot.h"
#include "ECharacterSex.h"
#include "Templates/SubclassOf.h"
#include "VStatusEffectTarget.h"
#include "VModularBodyPartBase.generated.h"

class AVModularBodyPartBase;
class USkeletalMesh;
class USkeletalMeshComponent;
class UTESRace;
class UVCharacterPhenotypeData;

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVModularBodyPartBase : public AVStatusEffectTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> MaleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> FemaleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* RootSkeletalMeshComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaleBodySectionHidden;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FemaleBodySectionHidden;
    
    AVModularBodyPartBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttachToLeaderComponent(USkeletalMeshComponent* MasterComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttachedToPhenotype(UVCharacterPhenotypeData* PhenotypeData, UTESRace* CharacterRace, ECharacterSex CharacterSex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttachedInFirstPerson();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<AVModularBodyPartBase> GetModularBodyPartClassFromSlot(EBipedModularBodySlot Slot);
    
};

