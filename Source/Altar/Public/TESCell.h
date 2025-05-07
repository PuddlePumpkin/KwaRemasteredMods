#pragma once
#include "CoreMinimal.h"
#include "CellExteriorData.h"
#include "CellInteriorData.h"
#include "TESForm.h"
#include "TESCell.generated.h"

class UTESLandscape;
class UTESPathGrid;
class UTESWorldSpace;

UCLASS(Blueprintable, Transient)
class ALTAR_API UTESCell : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCellInteriorData InteriorCellData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCellExteriorData ExteriorCellData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CellFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESWorldSpace* WorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESPathGrid* PathGrid;
    
    UTESCell();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersistent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTESLandscape* GetLandscape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDataY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDataX() const;
    
};

