#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModernRebindSettingTableRow.h"
#include "VModernSettingRebindData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernSettingRebindData : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernRebindSettingTableRow> RebindSettings;
    
public:
    UVModernSettingRebindData();

};

