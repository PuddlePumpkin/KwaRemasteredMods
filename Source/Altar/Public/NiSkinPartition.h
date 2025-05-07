#pragma once
#include "CoreMinimal.h"
#include "BSVertexDesc.h"
#include "NiObject.h"
#include "NiSkinPartition.generated.h"

class UBSVertexDataSSE;
class USkinPartition;

UCLASS(Blueprintable)
class ALTAR_API UNiSkinPartition : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumPartitions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DataSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 VertexSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBSVertexDesc VertexDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBSVertexDataSSE*> VertexData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkinPartition*> Partitions;
    
    UNiSkinPartition();

};

