#pragma once
#include "CoreMinimal.h"
#include "InitialEquipmentInfo.generated.h"

class UTESForm;

USTRUCT(BlueprintType)
struct FInitialEquipmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESForm* EquipmentForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNPCDefault;
    
    ALTAR_API FInitialEquipmentInfo();
};

