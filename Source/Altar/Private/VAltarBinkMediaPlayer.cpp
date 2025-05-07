#include "VAltarBinkMediaPlayer.h"

UVAltarBinkMediaPlayer::UVAltarBinkMediaPlayer() : UUserWidget(FObjectInitializer::Get()) {
    this->VideoRenderer = NULL;
    this->bDoesHaveSubtitle = false;
    this->FadeDuration = 0.25f;
    this->SubtitleData = NULL;
}


void UVAltarBinkMediaPlayer::StartNextSubtitle() {
}

bool UVAltarBinkMediaPlayer::Seek(float Timestamp) {
    return false;
}

bool UVAltarBinkMediaPlayer::Prepare() {
    return false;
}

bool UVAltarBinkMediaPlayer::PlayFromTimeStamp(float Timestamp) {
    return false;
}

bool UVAltarBinkMediaPlayer::PlayFromStart() {
    return false;
}

bool UVAltarBinkMediaPlayer::Play() {
    return false;
}

bool UVAltarBinkMediaPlayer::Pause() {
    return false;
}

bool UVAltarBinkMediaPlayer::OpenUrl(const FString& NewUrl) {
    return false;
}

bool UVAltarBinkMediaPlayer::Open() {
    return false;
}



void UVAltarBinkMediaPlayer::ManageSubtitle() {
}

void UVAltarBinkMediaPlayer::LaunchFadeOut() {
}

bool UVAltarBinkMediaPlayer::IsPlaying() const {
    return false;
}

bool UVAltarBinkMediaPlayer::IsOpened() const {
    return false;
}

void UVAltarBinkMediaPlayer::Internal_OnVideoOpenned(const FString& OpenedUrl) {
}

void UVAltarBinkMediaPlayer::Internal_OnVideoCompleted() {
}

bool UVAltarBinkMediaPlayer::HaveReachedNextStartTimer() const {
    return false;
}

bool UVAltarBinkMediaPlayer::HaveReachedNextEndTimer() const {
    return false;
}

bool UVAltarBinkMediaPlayer::HaveReachedFadeOutTimer() const {
    return false;
}

FString UVAltarBinkMediaPlayer::GetCurrentPath() const {
    return TEXT("");
}

void UVAltarBinkMediaPlayer::EndCurrentSubtitle() {
}

void UVAltarBinkMediaPlayer::Close() {
}

void UVAltarBinkMediaPlayer::Clear() {
}


