#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ENavigationInputAction.h"
#include "NavigationMappingProperties.h"
#include "NavigationActionMappingTableRow.generated.h"

USTRUCT(BlueprintType)
struct FNavigationActionMappingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavigationInputAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavigationMappingProperties> Mappings;
    
    ALTAR_API FNavigationActionMappingTableRow();
};

