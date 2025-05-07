#pragma once
#include "CoreMinimal.h"
#include "TileViewIndex.h"
#include "VNavigableActivatableWidgetBase.h"
#include "VNavigableTileView.generated.h"

class UCommonTileView;
class UObject;
class UUserWidget;
class UVTileViewWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableTileView : public UVNavigableActivatableWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemHovered, UObject*, HoveredItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClicked, UObject*, SelectedItem);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemHovered OnItemHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemClicked OnItemClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasedDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHoverDisabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTileViewWidget* TileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCycleOnColumnBoundaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* HoveredItem;
    
public:
    UVNavigableTileView();

protected:
    UFUNCTION(BlueprintCallable)
    void SetIndex(int32 NewLine, int32 NewColumn);
    
public:
    UFUNCTION(BlueprintCallable)
    void NavigateToIndex1D(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToIndex(int32 NewLine, int32 NewColumn);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToElement(UObject* ItemToNavigateTo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetWidgetFromItem(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetTileViewItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonTileView* GetTileView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLinesPerColumn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemsPerLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetItemAt(int32 Line, int32 Column) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexOfItem(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTileViewIndex GetFocusedItemIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearTileViewItems();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnItemHovered(UObject* NewHoveredItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnItemClicked(UObject* ClickedItem);
    
    UFUNCTION(BlueprintCallable)
    void AddItem(UObject* ItemToAdd);
    
};

