#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "VPhysicsAssetPose.h"
#include "VAltarDeadBodiesTransformTable.generated.h"

USTRUCT(BlueprintType)
struct FVAltarDeadBodiesTransformTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CapsuleWorldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshWorldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVPhysicsAssetPose PhysicsAssetPose;
    
    ALTAR_API FVAltarDeadBodiesTransformTable();
};

