#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeUVTransform.h"
#include "VSkelMeshMergeUVTransformMapping.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVSkelMeshMergeUVTransformMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeUVTransform> UVTransformsPerMesh;
    
    FVSkelMeshMergeUVTransformMapping();
};

