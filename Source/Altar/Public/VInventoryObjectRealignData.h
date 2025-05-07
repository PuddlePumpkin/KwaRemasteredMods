#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "VInventoryObjectRealignData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct ALTAR_API FVInventoryObjectRealignData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTransform> ActorPositionOffsetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> InventoryPreviewBackgroundMaterial;
    
    FVInventoryObjectRealignData();
};

