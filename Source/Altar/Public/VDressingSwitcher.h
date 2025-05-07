#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VDressingSwitcher.generated.h"

class UInstancedStaticMeshComponent;
class USceneComponent;
class UStaticMesh;
class UVDynamicNavAreaRebuilderComponent;

UCLASS(Blueprintable)
class ALTAR_API AVDressingSwitcher : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UStaticMesh*, UInstancedStaticMeshComponent*> CreatedInstancers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVDynamicNavAreaRebuilderComponent* NavRebuilderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> VisibilityPairedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDressingHidden;
    
public:
    AVDressingSwitcher(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RefreshVisibilityFromTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTargetDisabled(bool bShouldBeDisabled);
    
};

