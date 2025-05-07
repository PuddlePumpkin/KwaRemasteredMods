#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModernSettingTableRow.h"
#include "VModernSettingTable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernSettingTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernSettingTableRow> Settings;
    
public:
    UVModernSettingTable();

};

