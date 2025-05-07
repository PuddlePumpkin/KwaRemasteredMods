#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NiSkinInstance.generated.h"

class UNiNode;
class UNiSkinData;
class UNiSkinPartition;

UCLASS(Blueprintable)
class ALTAR_API UNiSkinInstance : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiSkinData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiSkinPartition* SkinPartition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiNode* SkeletonRoot;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiNode*> Bones;
    
    UNiSkinInstance();

};

