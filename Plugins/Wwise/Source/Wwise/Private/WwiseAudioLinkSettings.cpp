#include "WwiseAudioLinkSettings.h"

UWwiseAudioLinkSettings::UWwiseAudioLinkSettings() {
    this->bShouldClearBufferOnReceipt = true;
    this->ProducerToConsumerBufferRatio = 2.00f;
    this->InitialSilenceFillRatio = 1.00f;
    this->StartEventResolved = NULL;
}


