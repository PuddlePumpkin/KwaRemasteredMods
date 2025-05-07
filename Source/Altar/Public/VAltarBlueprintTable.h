#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VAltarBlueprintTable.generated.h"

class UVModdableBlueprint;

UCLASS(Blueprintable)
class ALTAR_API UVAltarBlueprintTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, TSoftObjectPtr<UVModdableBlueprint>> BlueprintsMap;
    
public:
    UVAltarBlueprintTable();

};

