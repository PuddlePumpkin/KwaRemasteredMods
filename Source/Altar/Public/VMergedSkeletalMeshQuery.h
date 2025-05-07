#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VMergedSkeletalMeshQuery.generated.h"

class USkeletalMeshComponent;
class UVMergedSkeletalMeshCache;
class UVMergedSkeletalMeshComponent;

UCLASS(Blueprintable)
class UVMergedSkeletalMeshQuery : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVMergedSkeletalMeshComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MasterPoseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVMergedSkeletalMeshCache* Cache;
    
    UVMergedSkeletalMeshQuery();

};

