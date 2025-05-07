#include "VLegacyListViewBase.h"

UVLegacyListViewBase::UVLegacyListViewBase() : UListView(FObjectInitializer::Get()) {
}

void UVLegacyListViewBase::RequestScrollOffsetOfEndSync() {
}

void UVLegacyListViewBase::OnScrollOffsetOfEndChangedInternal(float ScrollOffsetOfEnd) {
}

float UVLegacyListViewBase::GetScrollOffsetOfEnd() const {
    return 0.0f;
}

int32 UVLegacyListViewBase::GetItemIndexOfTopEntry() const {
    return 0;
}

UObject* UVLegacyListViewBase::GetItemFromEntryWidget(const UUserWidget* EntryWidget) const {
    return NULL;
}

UUserWidget* UVLegacyListViewBase::GetEntryFromItem(const UObject* Item) const {
    return NULL;
}


