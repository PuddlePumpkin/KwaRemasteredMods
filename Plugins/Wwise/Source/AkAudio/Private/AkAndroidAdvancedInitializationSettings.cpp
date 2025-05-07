#include "AkAndroidAdvancedInitializationSettings.h"

FAkAndroidAdvancedInitializationSettings::FAkAndroidAdvancedInitializationSettings() {
    this->AudioAPI = 0;
    this->RoundFrameSizeToHardwareSize = false;
    this->UseLowLatencyMode = false;
    this->bVerboseSink = false;
}

