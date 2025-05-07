#include "VAudioHandlersSubsystem.h"

UVAudioHandlersSubsystem::UVAudioHandlersSubsystem() {
    this->MusicPlayerActor = NULL;
    this->WeatherAudioPlayerActor = NULL;
    this->WaterSoundFollowerActor = NULL;
}

AVWeatherAudioPlayer* UVAudioHandlersSubsystem::GetWeatherAudioPlayerActor() {
    return NULL;
}

AVMusicPlayer* UVAudioHandlersSubsystem::GetMusicPlayerActor() {
    return NULL;
}


