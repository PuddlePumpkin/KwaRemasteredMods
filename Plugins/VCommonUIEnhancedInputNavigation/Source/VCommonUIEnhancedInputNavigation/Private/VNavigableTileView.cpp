#include "VNavigableTileView.h"

UVNavigableTileView::UVNavigableTileView() {
    this->Multiplicator = 0.90f;
    this->BasedDelay = 0.30f;
    this->MinDelay = 0.08f;
    this->bIsHoverDisabled = false;
    this->TileView = NULL;
    this->bShouldCycleOnColumnBoundaries = false;
    this->HoveredItem = NULL;
}

void UVNavigableTileView::SetIndex(int32 NewLine, int32 NewColumn) {
}

void UVNavigableTileView::NavigateToIndex1D(int32 Index) {
}

void UVNavigableTileView::NavigateToIndex(int32 NewLine, int32 NewColumn) {
}

void UVNavigableTileView::NavigateToElement(UObject* ItemToNavigateTo) {
}

UUserWidget* UVNavigableTileView::GetWidgetFromItem(UObject* Item) const {
    return NULL;
}

TArray<UObject*> UVNavigableTileView::GetTileViewItems() const {
    return TArray<UObject*>();
}

UCommonTileView* UVNavigableTileView::GetTileView() const {
    return NULL;
}

int32 UVNavigableTileView::GetSize() const {
    return 0;
}

int32 UVNavigableTileView::GetLinesPerColumn() const {
    return 0;
}

int32 UVNavigableTileView::GetItemsPerLine() const {
    return 0;
}

UObject* UVNavigableTileView::GetItemAt(int32 Line, int32 Column) const {
    return NULL;
}

int32 UVNavigableTileView::GetIndexOfItem(UObject* Item) const {
    return 0;
}

FTileViewIndex UVNavigableTileView::GetFocusedItemIndex() const {
    return FTileViewIndex{};
}

void UVNavigableTileView::ClearTileViewItems() {
}



void UVNavigableTileView::AddItem(UObject* ItemToAdd) {
}


