#include "VAltarSaveSystem.h"

UVAltarSaveSystem::UVAltarSaveSystem() {
    this->AltarSaveMetaData = NULL;
    this->AltarSaveGameInFlight = NULL;
    this->UserIndex = 0;
}

void UVAltarSaveSystem::SetProvisionScreenshot(int32 SizeX, int32 SizeY, const TArray<FColor>& Data) {
}

void UVAltarSaveSystem::RequestScreenshotAfterLevelChange() {
}

void UVAltarSaveSystem::OnAsyncSaveComplete_Delegate(const UVAltarSaveGame* SaveGame) {
}


