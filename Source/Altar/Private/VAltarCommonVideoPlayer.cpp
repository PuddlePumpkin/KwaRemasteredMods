#include "VAltarCommonVideoPlayer.h"

UVAltarCommonVideoPlayer::UVAltarCommonVideoPlayer(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
}

bool UVAltarCommonVideoPlayer::IsMediaOpen() const {
    return false;
}

void UVAltarCommonVideoPlayer::BP_SetLooping(bool bShouldLoopPlayback) {
}

void UVAltarCommonVideoPlayer::BP_Seek(float Timestamp) {
}

void UVAltarCommonVideoPlayer::BP_PlayFromStart() {
}

void UVAltarCommonVideoPlayer::BP_Play() {
}

void UVAltarCommonVideoPlayer::BP_Pause() {
}

void UVAltarCommonVideoPlayer::BP_Open() {
}

bool UVAltarCommonVideoPlayer::BP_IsPlaying() const {
    return false;
}

void UVAltarCommonVideoPlayer::BP_Close() {
}


