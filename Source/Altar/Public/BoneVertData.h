#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "BoneVertData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UBoneVertData : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UBoneVertData();

};

