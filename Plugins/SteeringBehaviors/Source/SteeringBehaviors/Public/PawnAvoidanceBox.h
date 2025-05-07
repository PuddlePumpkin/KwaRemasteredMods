#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PawnAvoidanceBox.generated.h"

USTRUCT(BlueprintType)
struct FPawnAvoidanceBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator BoxRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EntryLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EntryLocationPathDistance2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExitLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExitLocationPathDistance2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeftPathStartIndex;
    
    STEERINGBEHAVIORS_API FPawnAvoidanceBox();
};

