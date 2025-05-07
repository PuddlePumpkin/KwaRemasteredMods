#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VAltarMenuDefaults.h"
#include "VAltarMenuDefaultsTable.generated.h"

class UVAltarMenu;

UCLASS(Blueprintable)
class ALTAR_API UVAltarMenuDefaultsTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UVAltarMenu>, FVAltarMenuDefaults> MenuDefaultsMap;
    
public:
    UVAltarMenuDefaultsTable();

};

