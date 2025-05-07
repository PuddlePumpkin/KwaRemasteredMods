#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterFaceMorphAxis.h"
#include "CharacterHairPieceBaseConstructResult.h"
#include "EVFacialHairType.h"
#include "VCharacterHairPieceMeshPair.h"
#include "VSexAndRaceMapKey.h"
#include "VCharacterHairPieceBase.generated.h"

class USkeletalMeshComponent;
class UVCharacterPhenotypeData;

UCLASS(Abstract, Blueprintable)
class ALTAR_API UVCharacterHairPieceBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHairPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVSexAndRaceMapKey, FVCharacterHairPieceMeshPair> RaceAndSexSpecificHairMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVCharacterHairPieceMeshPair HairSkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCharacterFaceMorphAxis> SpecificMorphTarget;
    
    UVCharacterHairPieceBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVFacialHairType GetFacialHairType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterHairPieceBaseConstructResult ConstructComponent(USkeletalMeshComponent* FaceMeshComponent, UVCharacterPhenotypeData* Phenotype) const;
    
};

