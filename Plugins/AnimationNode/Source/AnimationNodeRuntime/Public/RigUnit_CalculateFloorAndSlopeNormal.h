#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FeetIKSystemData.h"
#include "FeetIKSystemSettings.h"
#include "RigUnit_FeetIKBaseMutable.h"
#include "RigUnit_CalculateFloorAndSlopeNormal.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_CalculateFloorAndSlopeNormal : public FRigUnit_FeetIKBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeetIKSystemData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> HitLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AverageHitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NewFloorNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NewSlopeNormal;
    
    FRigUnit_CalculateFloorAndSlopeNormal();
};

