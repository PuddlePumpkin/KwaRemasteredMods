#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "ELegacyMapMenuIcon.h"
#include "Modern_AltarMapIconDesignTableRow.h"
#include "Templates/SubclassOf.h"
#include "VAltarWidget.h"
#include "VModern_MapIconFilter.generated.h"

class UCommonUserWidget;
class UVModern_AltarMapIconDesignTable;
class UVNavigableScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModern_MapIconFilter : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVNavigableScrollBox* FilterIconBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVNavigableScrollBox* ControlFilterBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonUserWidget> FilterIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVModern_AltarMapIconDesignTable* IconDesignTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin FilterPadding;
    
    UVModern_MapIconFilter();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestUpdateFilterWidget(UCommonUserWidget* Filter, bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestUpdateFilteredWidget(UCommonUserWidget* FilteredWidget, bool bCanBeDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetUnregisterToFilter(UCommonUserWidget* Filter, UCommonUserWidget* RemovedWidget, int32 NumberOfFilteredObjects);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetRegisterToFilter(UCommonUserWidget* Filter, UCommonUserWidget* NewWidgetToFilter, int32 NumberOfFilteredObjects);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostTryRegisterWidgetToFilter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFilterIconCreated(UCommonUserWidget* NewFilter, const FModern_AltarMapIconDesignTableRow& FilterDesign, bool bIsControlFilter);
    
    UFUNCTION(BlueprintCallable)
    bool IsFilterHasAtLeastOneDisplayedIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFilterFlagAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonUserWidget* GetControlFilter() const;
    
    UFUNCTION(BlueprintCallable)
    void DesactivateIconFilter(UCommonUserWidget* Activator);
    
    UFUNCTION(BlueprintCallable)
    void DesactivateFilter(UCommonUserWidget* Activator);
    
    UFUNCTION(BlueprintCallable)
    void ActivateSpecificFilterFromEnum(ELegacyMapMenuIcon ActivatorEnum);
    
    UFUNCTION(BlueprintCallable)
    void ActivateIconFilter(UCommonUserWidget* Activator);
    
    UFUNCTION(BlueprintCallable)
    void ActivateFilter(UCommonUserWidget* Activator);
    
    UFUNCTION(BlueprintCallable)
    void ActivateControlFilterFromEnum(ELegacyMapMenuIcon ActivatorEnum);
    
    UFUNCTION(BlueprintCallable)
    void ActivateControlFilter(UCommonUserWidget* Activator, bool bIsAll);
    
};

