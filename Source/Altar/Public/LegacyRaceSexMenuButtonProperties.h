#pragma once
#include "CoreMinimal.h"
#include "ELegacyRaceSexMenuButtonType.h"
#include "ELegacyRaceSexMenuPage.h"
#include "LegacyRaceSexMenuButtonProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyRaceSexMenuButtonProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyRaceSexMenuButtonType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyRaceSexMenuPage PageRedirect;
    
    ALTAR_API FLegacyRaceSexMenuButtonProperties();
};

