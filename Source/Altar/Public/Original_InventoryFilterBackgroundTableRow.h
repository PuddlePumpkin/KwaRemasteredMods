#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EOriginalInventoryFilterBackgrounds.h"
#include "Original_InventoryFilterBackgroundTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOriginal_InventoryFilterBackgroundTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryFilterBackgrounds EnumKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TextureArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TextureSize;
    
    ALTAR_API FOriginal_InventoryFilterBackgroundTableRow();
};

