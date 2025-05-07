#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ClothQualityChangedDelegate.h"
#include "ViewDistanceQualityChangedDelegate.h"
#include "AltarGameModeBase.generated.h"

class ANavMeshBoundsVolume;
class AVPhysicsDebugPanel;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API AAltarGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseUnrealDebugTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavMeshBoundsVolume* BackupNavMeshBoundsVolumeActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothQualityChanged OnClothQualityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewDistanceQualityChanged OnViewDistanceQualityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseDetourCrowdBehaviour;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AVPhysicsDebugPanel> PhysicsDebugPanel;
    
public:
    AAltarGameModeBase(const FObjectInitializer& ObjectInitializer);

};

