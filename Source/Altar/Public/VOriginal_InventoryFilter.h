#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "EOriginalInventoryMenuSortType.h"
#include "Original_InventoryFilterTableRow.h"
#include "Templates/SubclassOf.h"
#include "VAltarWidget.h"
#include "VOriginal_InventoryFilter.generated.h"

class UCommonUserWidget;
class UVNavigableScrollBox;
class UVOriginal_AltarInventoryFilterIconTable;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVOriginal_InventoryFilter : public UVAltarWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSortTypeUpdated, EOriginalInventoryMenuSortType, SortType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsReversedUpdated, bool, bIsReversed);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSortTypeUpdated OnSortTypeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsReversedUpdated OnSortIsReversedUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVNavigableScrollBox* FilterIconBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonUserWidget> FilterIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVOriginal_AltarInventoryFilterIconTable* IconDesignTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin FilterPadding;
    
    UVOriginal_InventoryFilter();

protected:
    UFUNCTION(BlueprintCallable)
    void SetEnabledFilters(const TArray<EOriginalInventoryMenuSortType>& EnabledFilterEnums);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetActiveFilter(EOriginalInventoryMenuSortType ActiveFilterEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestUpdateFilterWidget(UCommonUserWidget* Filter, bool bIsDisplayed, bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFilterIconCreated(UCommonUserWidget* NewFilter, const FOriginal_InventoryFilterTableRow& FilterDesign);
    
    UFUNCTION(BlueprintCallable)
    void ActivateFilter(UCommonUserWidget* Activator);
    
};

