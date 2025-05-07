#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NiSkinData.generated.h"

class UBoneData;
class UNiSkinPartition;
class UNiTransform;

UCLASS(Blueprintable)
class ALTAR_API UNiSkinData : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiTransform* SkinTransform;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiSkinPartition* SkinPartition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HasVertexWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBoneData*> BoneList;
    
    UNiSkinData();

};

