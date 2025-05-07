#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "ELegacyMagicMenuSortType.h"
#include "ModernMagicFilterTableRow.h"
#include "Templates/SubclassOf.h"
#include "VAltarWidget.h"
#include "VModernMagicFilter.generated.h"

class UCommonUserWidget;
class UVModernAltarMagicFilterIconTable;
class UVNavigableScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernMagicFilter : public UVAltarWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSortTypeUpdated, ELegacyMagicMenuSortType, SortType);
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
    UVModernAltarMagicFilterIconTable* IconDesignTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin FilterPadding;
    
    UVModernMagicFilter();

protected:
    UFUNCTION(BlueprintCallable)
    void SetEnabledFilters(const TArray<ELegacyMagicMenuSortType>& EnabledFilterEnums);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetActiveFilter(const ELegacyMagicMenuSortType ActiveFilterEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestUpdateFilterWidget(UCommonUserWidget* Filter, bool bIsDisplayed, bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFilterIconCreated(UCommonUserWidget* NewFilter, const FModernMagicFilterTableRow& FilterDesign);
    
    UFUNCTION(BlueprintCallable)
    void ActivateFilter(UCommonUserWidget* Activator);
    
};

