#include "ModernSettingPageTableRow.h"

FModernSettingPageTableRow::FModernSettingPageTableRow() {
    this->PlatformFlag = 0;
    this->PageType = FModernSettingsPageType::Settings;
    this->Categories = NULL;
    this->RebindTable = NULL;
    this->OverrideWidget = NULL;
}

