#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "VAltarMenuDefaultsTableRow.generated.h"

class UVAltarMenu;

USTRUCT(BlueprintType)
struct ALTAR_API FVAltarMenuDefaultsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVAltarMenu> BaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVAltarMenu> DefaultCreatedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LayerTag;
    
    FVAltarMenuDefaultsTableRow();
};

