#pragma once
#include "CoreMinimal.h"
#include "VPhysicsSettingsAuthorityFlags.generated.h"

USTRUCT(BlueprintType)
struct FVPhysicsSettingsAuthorityFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCollisionProfileCodeDriven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWeightCodeDriven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreDampingValuesCodeDriven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreNavigationSettingsCodeDriven;
    
    ALTAR_API FVPhysicsSettingsAuthorityFlags();
};

