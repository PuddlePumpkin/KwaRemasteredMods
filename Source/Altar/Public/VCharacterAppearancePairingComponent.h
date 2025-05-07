#pragma once
#include "CoreMinimal.h"
#include "EVCharacterPhenotypeDataFilter.h"
#include "EVSenescenceModifiers.h"
#include "VActorPairingComponent.h"
#include "VCharacterAppearancePairingComponent.generated.h"

class USkeletalMeshComponent;
class UTESMagicItemForm;
class UVCharacterPhenotypeData;
class UVHumanoidHeadComponent;
class UVSenescenceLevel;

UCLASS(Blueprintable, ClassGroup=Custom, Within=VPairedCharacter, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVCharacterAppearancePairingComponent : public UVActorPairingComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAppearanceRefresh, const UVCharacterPhenotypeData*, Phenotype);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAppearanceRefresh OnAppearanceRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseProceduralHead;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVHumanoidHeadComponent> LinkedHeadMeshComponent;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USkeletalMeshComponent>> LinkedBodyMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<UTESMagicItemForm>> CurrentDiseases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VampireLevel;
    
public:
    UVCharacterAppearancePairingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVampireLevel(int32 NewVampireLevel);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDisease(const UTESMagicItemForm* NewDiseaseForm);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCharacterAppearance();
    
    UFUNCTION(BlueprintCallable)
    void ReapplyPhenotypeData(EVCharacterPhenotypeDataFilter Filter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDiseaseActive(const UTESMagicItemForm* NewDiseaseForm) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAVampire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVampireLevel() const;
    
    UFUNCTION(BlueprintPure)
    EVSenescenceModifiers GetSenescenceModifier() const;
    
    UFUNCTION(BlueprintCallable)
    void CureAllDiseases();
    
    UFUNCTION(BlueprintCallable)
    static void ApplySenescenceLevel(const USkeletalMeshComponent* SkeletalMesh, const UVSenescenceLevel* Level, EVSenescenceModifiers Modifiers, int32 MaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddNewDisease(const UTESMagicItemForm* NewDiseaseForm);
    
};

