#pragma once
#include "CoreMinimal.h"
#include "CharacterHairPieceBaseConstructResult.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct ALTAR_API FCharacterHairPieceBaseConstructResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HairMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HairMeshShadowProxyComponent;
    
    FCharacterHairPieceBaseConstructResult();
};

