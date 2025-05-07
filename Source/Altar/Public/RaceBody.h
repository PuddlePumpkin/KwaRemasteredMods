#pragma once
#include "CoreMinimal.h"
#include "BodyProperties.h"
#include "EVSenescenceModifiers.h"
#include "VRaceEyeParameters.h"
#include "RaceBody.generated.h"

class UDataTable;
class USkeletalMesh;
class UVCharacterPhenotypePreset;

USTRUCT(BlueprintType)
struct FRaceBody {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Senescence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVSenescenceModifiers, FVRaceEyeParameters> ModifierEyes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> FullBodySkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyProperties BodyProperties;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVCharacterPhenotypePreset> PhenotypePreset;
    
    ALTAR_API FRaceBody();
};

