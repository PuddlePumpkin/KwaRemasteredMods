#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VCharacterBodyPartProperties.generated.h"

class AVModularBodyPartBase;
class UTESForm;

USTRUCT(BlueprintType)
struct FVCharacterBodyPartProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESForm* EquipmentForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVModularBodyPartBase> EquippedClass;
    
    ALTAR_API FVCharacterBodyPartProperties();
};

