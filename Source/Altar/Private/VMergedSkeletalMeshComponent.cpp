#include "VMergedSkeletalMeshComponent.h"

UVMergedSkeletalMeshComponent::UVMergedSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MergedMeshComponent = NULL;
}

void UVMergedSkeletalMeshComponent::SetMergedMesh(USkeletalMeshComponent* MasterPoseComponent, const TArray<USkeletalMesh*>& SkeletalMeshes) {
}

USkeletalMeshComponent* UVMergedSkeletalMeshComponent::GetSkeletalMeshComponent() {
    return NULL;
}


