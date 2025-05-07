#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VPhysicsAssetPose.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVPhysicsAssetPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysicsAssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> BodiesWorldTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> AreConstraintsBroken;
    
    FVPhysicsAssetPose();
};

