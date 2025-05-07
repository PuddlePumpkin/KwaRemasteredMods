#pragma once
#include "CoreMinimal.h"
#include "ELegacyRaceSexMenuToggleType.h"
#include "EModernCharacterCreationGenderRequirement.h"
#include "VHairColorCustomisationOptions.h"
#include "VRaceSexMenuCustomisationOptions.generated.h"

class UMaterialInterface;
class UTexture;
class UVCharacterHairPieceBase;

USTRUCT(BlueprintType)
struct FVRaceSexMenuCustomisationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyRaceSexMenuToggleType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Portrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVCharacterHairPieceBase> HairPiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVHairColorCustomisationOptions HairColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModernCharacterCreationGenderRequirement GenderRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInRandomization;
    
    ALTAR_API FVRaceSexMenuCustomisationOptions();
};

