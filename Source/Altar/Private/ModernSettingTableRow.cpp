#include "ModernSettingTableRow.h"

FModernSettingTableRow::FModernSettingTableRow() {
    this->DescriptionObject = NULL;
    this->Type = EModernSettingWidgetType::Button;
    this->PlatformFlag = 0;
    this->bDoesNeedAutoRevertPopup = false;
    this->bIsHiddenInUI = false;
    this->SubType = EModernSettingWidgetSubType::NONE;
}

