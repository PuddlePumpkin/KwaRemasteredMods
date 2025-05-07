#include "VAltarMediaPlayer.h"

UVAltarMediaPlayer::UVAltarMediaPlayer() : UUserWidget(FObjectInitializer::Get()) {
    this->VideoRenderer = NULL;
}

bool UVAltarMediaPlayer::Seek(float Timestamp) {
    return false;
}

bool UVAltarMediaPlayer::Prepare() {
    return false;
}

bool UVAltarMediaPlayer::PlayFromTimeStamp(float Timestamp) {
    return false;
}

bool UVAltarMediaPlayer::PlayFromStart() {
    return false;
}

bool UVAltarMediaPlayer::Play() {
    return false;
}

bool UVAltarMediaPlayer::Pause() {
    return false;
}

bool UVAltarMediaPlayer::Open() {
    return false;
}

bool UVAltarMediaPlayer::IsPlaying() {
    return false;
}

bool UVAltarMediaPlayer::IsOpenned() {
    return false;
}

void UVAltarMediaPlayer::Internal_OnVideoOpenned(const FString& OpenedUrl) {
}

void UVAltarMediaPlayer::Internal_OnVideoCompleted() {
}

void UVAltarMediaPlayer::Close() {
}

void UVAltarMediaPlayer::Clear() {
}


