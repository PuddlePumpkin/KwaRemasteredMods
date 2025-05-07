#pragma once
#include "CoreMinimal.h"
#include "EVInstanceReplacementType.h"
#include "ReplacementMaterial.h"
#include "VInstanceMeshReplacement.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FVInstanceMeshReplacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVInstanceReplacementType> ReplacementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplacementMaterial> Materials;
    
    ALTAR_API FVInstanceMeshReplacement();
};

