#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "VAltarGameInstance.generated.h"

class UDataTable;
class UVAltarSaveIdentificationData;
class UVMovementSaveData;
class UVPhysicsSaveData;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVAltarGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AltarPrePlacedGuidToCellAsyncFlowHashDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AltarSEWorldPrePlacedGuidToCellAsyncFlowHashDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AltarCorpsePhysicsPosesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UDataTable*> WorldPartitionPrePlacedDatatables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AltarTamrielPrePlacedNotSpatiallyLoadedDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AltarSEWorldPrePlacedNotSpatiallyLoadedDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UDataTable*> WorldPartitionPrePlacedNotSpatiallyLoadedDataTables;
    

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVPhysicsSaveData* PhysicsSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAltarSaveIdentificationData* SaveIdentificationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVMovementSaveData* MovementSaveData;

public:
    UVAltarGameInstance();

};

