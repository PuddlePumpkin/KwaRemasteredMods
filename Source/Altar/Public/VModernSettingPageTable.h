#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModernSettingPageTableRow.h"
#include "VModernSettingPageTable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernSettingPageTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernSettingPageTableRow> Pages;
    
public:
    UVModernSettingPageTable();

};

