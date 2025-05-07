#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VMergedSkeletalMeshComponent.generated.h"

class USkeletalMesh;
class USkeletalMeshComponent;
class UVMergedSkeletalMeshSubsystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVMergedSkeletalMeshComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MergedMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVMergedSkeletalMeshSubsystem> MergedMeshSubsystem;
    
public:
    UVMergedSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMergedMesh(USkeletalMeshComponent* MasterPoseComponent, const TArray<USkeletalMesh*>& SkeletalMeshes);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMeshComponent();
    
};

