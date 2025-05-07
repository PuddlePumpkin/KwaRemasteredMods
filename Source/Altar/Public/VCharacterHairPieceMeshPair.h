#pragma once
#include "CoreMinimal.h"
#include "VCharacterHairPieceMeshPair.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FVCharacterHairPieceMeshPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> MeshShadowProxyComponent;
    
    ALTAR_API FVCharacterHairPieceMeshPair();
};

