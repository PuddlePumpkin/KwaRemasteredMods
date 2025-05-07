#pragma once
#include "CoreMinimal.h"
#include "ModernSettingCategoryTableRow.h"
#include "VAltarWidget.h"
#include "VModernSettingCategoryWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernSettingCategoryWidget : public UVAltarWidget {
    GENERATED_BODY()
public:
    UVModernSettingCategoryWidget();

    UFUNCTION(BlueprintCallable)
    void SetSettingCategoryRow(const FModernSettingCategoryTableRow& NewSettingCategoryRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingCategoryChanged(const FModernSettingCategoryTableRow& NewSettingCategoryRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernSettingCategoryTableRow GetSettingCategoryRow();
    
};

