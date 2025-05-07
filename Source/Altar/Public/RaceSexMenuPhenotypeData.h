#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterSex.h"
#include "ELegacyRaceSexMenuToggleType.h"
#include "RaceSexMenuPhenotypeData.generated.h"

class UTESRace;

USTRUCT(BlueprintType)
struct FRaceSexMenuPhenotypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESRace* Race;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSex Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> MorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FColor> ColorTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELegacyRaceSexMenuToggleType, int32> CustomisationTargets;
    
    ALTAR_API FRaceSexMenuPhenotypeData();
};

