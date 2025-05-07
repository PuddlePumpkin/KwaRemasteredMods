#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VPhysicsAssetPose.h"
#include "VPhysicsControllableState.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVPhysicsControllableState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStateValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSimulatingPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ActorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVPhysicsAssetPose> PhysicsAssetPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> WorldTransforms;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AttachParentFormID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttachComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Timestamp;
    
    FVPhysicsControllableState();
};

