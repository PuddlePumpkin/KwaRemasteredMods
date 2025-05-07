#include "AkOutputSettings.h"

FAkOutputSettings::FAkOutputSettings() {
    this->AudioDeviceShareSet = NULL;
    this->IdDevice = 0;
    this->PanRule = PanningRule::PanningRule_Speakers;
    this->ChannelConfig = AkChannelConfiguration::Ak_Parent;
}

