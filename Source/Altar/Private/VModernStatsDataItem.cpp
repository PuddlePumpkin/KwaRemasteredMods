#include "VModernStatsDataItem.h"

UVModernStatsDataItem::UVModernStatsDataItem() {
    this->RowIcon = NULL;
    this->TileIcon = NULL;
    this->Value = 0.00f;
    this->Type = EStatGroupType::Attribute;
    this->DefaultValue = 0.00f;
}

void UVModernStatsDataItem::SetBaseValues(EStatGroupType InType, FText InName, float InValue) {
}


