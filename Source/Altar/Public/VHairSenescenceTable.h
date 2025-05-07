#pragma once
#include "CoreMinimal.h"
#include "EVFacialHairType.h"
#include "VHairSenescenceTable.generated.h"

class UVSenescenceLevel;

USTRUCT(BlueprintType)
struct FVHairSenescenceTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVFacialHairType, TSoftObjectPtr<UVSenescenceLevel>> HairMap;
    
    ALTAR_API FVHairSenescenceTable();
};

