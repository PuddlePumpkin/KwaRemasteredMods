#include "AkXSXAdvancedInitializationSettings.h"

FAkXSXAdvancedInitializationSettings::FAkXSXAdvancedInitializationSettings() {
    this->MaximumNumberOfXMAVoices = 0;
    this->UseHardwareCodecLowLatencyMode = false;
    this->MaximumNumberOfOpusVoices = 0;
    this->uMaxSystemAudioObjects = 0;
    this->MaxXdspStreams = 0;
    this->MaxXdspAggregateStreamLength = 0;
    this->EnableXdspOnLockhart = false;
}

