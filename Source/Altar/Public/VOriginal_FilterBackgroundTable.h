#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EOriginalInventoryFilterBackgrounds.h"
#include "Original_InventoryFilterBackgroundTableRow.h"
#include "VOriginal_FilterBackgroundTable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVOriginal_FilterBackgroundTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOriginalInventoryFilterBackgrounds, FOriginal_InventoryFilterBackgroundTableRow> InventoryFilterBackgroundsMap;
    
public:
    UVOriginal_FilterBackgroundTable();

};

