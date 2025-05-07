#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VMergedSkeletalMeshCache.generated.h"

class USkeletalMesh;
class UVMergedSkeletalMeshBuffer;
class UVMergedSkeletalMeshTask;

UCLASS(Blueprintable)
class UVMergedSkeletalMeshCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* MergedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVMergedSkeletalMeshTask* Task;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UVMergedSkeletalMeshBuffer*> WaitingBuffers;
    
    UVMergedSkeletalMeshCache();

};

