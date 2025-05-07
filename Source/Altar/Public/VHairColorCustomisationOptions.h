#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVFacialHairType.h"
#include "VHairColorCustomisationOptions.generated.h"

USTRUCT(BlueprintType)
struct FVHairColorCustomisationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVFacialHairType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor HairColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetToDefault;
    
    ALTAR_API FVHairColorCustomisationOptions();
};

