#pragma once
#include "CoreMinimal.h"
#include "VModularBodyPartBase.h"
#include "VModularBodyPartRaceProperties.h"
#include "VUpperBodyModularBodyPart.generated.h"

class UTESRace;

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVUpperBodyModularBodyPart : public AVModularBodyPartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaterialSlotsHiddenInFirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTESRace*, FVModularBodyPartRaceProperties> RaceSpecificProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHideAmulet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmuletChestSnappingAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmuletFemaleChestSnappingAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHidePartOfGloves;
    
    AVUpperBodyModularBodyPart(const FObjectInitializer& ObjectInitializer);

};

