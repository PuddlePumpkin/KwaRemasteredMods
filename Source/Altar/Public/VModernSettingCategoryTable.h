#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModernSettingCategoryTableRow.h"
#include "VModernSettingCategoryTable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernSettingCategoryTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernSettingCategoryTableRow> Categories;
    
public:
    UVModernSettingCategoryTable();

};

