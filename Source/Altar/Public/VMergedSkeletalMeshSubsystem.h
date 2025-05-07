#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VMergedSkeletalMeshSubsystem.generated.h"

class UVMergedSkeletalMeshBuffer;
class UVMergedSkeletalMeshCache;
class UVMergedSkeletalMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API UVMergedSkeletalMeshSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UVMergedSkeletalMeshComponent*, UVMergedSkeletalMeshBuffer*> ComponentToBuffer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TWeakObjectPtr<UVMergedSkeletalMeshCache>> CacheLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVMergedSkeletalMeshBuffer*> BufferQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UVMergedSkeletalMeshCache*> CachesWithRunningTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVMergedSkeletalMeshBuffer*> DestroyedBuffersQueue;
    
public:
    UVMergedSkeletalMeshSubsystem();

};

