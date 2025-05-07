#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkeletalMeshMerge.h"
#include "VMergedSkeletalMeshTask.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class UVMergedSkeletalMeshTask : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> SkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeSectionMapping> SectionMappings;
    
    UVMergedSkeletalMeshTask();

};

