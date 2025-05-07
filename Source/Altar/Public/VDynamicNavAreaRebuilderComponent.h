#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "VDynamicNavAreaRebuilderComponent.generated.h"

class UVPhysicsControllerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVDynamicNavAreaRebuilderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirtyNavAreaOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirtyNavAreaOnPhysicsStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultPhysicsState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePrimitivesBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttachedChildPrimitivesBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CustomBoundsCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CustomBoundsExtents;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVPhysicsControllerComponent* OptionalPhysicsControllerComponent;
    
public:
    UVDynamicNavAreaRebuilderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceDirtyNavArea(const FName& DebugReason);
    
    UFUNCTION(BlueprintCallable)
    void DirtyNavArea(const FName& DebugReason);
    
};

