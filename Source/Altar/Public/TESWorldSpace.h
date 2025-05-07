#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TESForm.h"
#include "WorldMapData.h"
#include "WorldMapLandscapeInfo.h"
#include "WorldMapLandscapeSettings.h"
#include "TESWorldSpace.generated.h"

class UTESCell;
class UTESClimate;
class UTESTexture;
class UTESWaterForm;
class UTESWorldSpace;

UCLASS(Blueprintable, Transient)
class ALTAR_API UTESWorldSpace : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapLandscapeSettings LandscapeGenerationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapLandscapeInfo LandscapeGenerationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> CellFileOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESClimate* Climate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESWaterForm* WorldWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESWorldSpace* ParentWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapData WorldMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinimumCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaximumCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTESCell*> CellMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESCell* PersistentCell;
    
    UTESWorldSpace();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCellsGridSizeY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCellsGridSizeX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCellsGridMinY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCellsGridMinX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCellsGridMaxY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCellsGridMaxX() const;
    
    UFUNCTION(BlueprintCallable)
    UTESCell* GetCellAtGridXY(int32 X, int32 Y);
    
};

