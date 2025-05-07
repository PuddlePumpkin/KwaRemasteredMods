#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EOriginalInventoryMenuSortType.h"
#include "Original_InventoryFilterTableRow.h"
#include "VOriginal_AltarInventoryFilterIconTable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVOriginal_AltarInventoryFilterIconTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOriginalInventoryMenuSortType, FOriginal_InventoryFilterTableRow> InventoryFilterIconDesign;
    
public:
    UVOriginal_AltarInventoryFilterIconTable();

};

