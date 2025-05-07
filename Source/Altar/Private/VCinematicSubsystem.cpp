#include "VCinematicSubsystem.h"

UVCinematicSubsystem::UVCinematicSubsystem() {
    this->CinematicSaveData = NULL;
}

void UVCinematicSubsystem::StartInGameCinematic() {
}

void UVCinematicSubsystem::OnLevelSequenceEnd() {
}

bool UVCinematicSubsystem::IsPlayingCinematic() const {
    return false;
}


