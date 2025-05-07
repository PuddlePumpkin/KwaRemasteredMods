#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VOblivionGameInstanceSubSystem.generated.h"

class AVTickSynchronizer;
class UDataTable;
class UMaterial;
class UTESSync;
class UTexture2D;
class UVLevelChangeData;

UCLASS(Blueprintable)
class ALTAR_API UVOblivionGameInstanceSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVTickSynchronizer* TickSynchronizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESSync* FormSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ObvUIAltarTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ObvTexMainAltarTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* ObvUIAltarPPMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVLevelChangeData* LevelChangeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CreatureBossDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelCreatureBossDataTable;
    
    UVOblivionGameInstanceSubSystem();

    UFUNCTION(BlueprintCallable)
    void WriteAltarCrashInfos();
    
    UFUNCTION(BlueprintCallable)
    void OnGarbageCollection();
    
};

