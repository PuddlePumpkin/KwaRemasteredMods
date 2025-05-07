#pragma once
#include "CoreMinimal.h"
#include "NiBound.h"
#include "NifType.h"
#include "BoneData.generated.h"

class UBoneVertData;
class UNiTransform;

UCLASS(Blueprintable)
class ALTAR_API UBoneData : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiTransform* SkinTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiBound BoundingSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBoneVertData*> VertexWeights;
    
    UBoneData();

};

