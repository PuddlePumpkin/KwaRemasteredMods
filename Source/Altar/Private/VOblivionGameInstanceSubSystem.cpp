#include "VOblivionGameInstanceSubSystem.h"
#include "VLevelChangeData.h"

UVOblivionGameInstanceSubSystem::UVOblivionGameInstanceSubSystem() {
    this->TickSynchronizer = NULL;
    this->FormSync = NULL;
    this->ObvUIAltarTex = NULL;
    this->ObvTexMainAltarTex = NULL;
    this->LevelChangeData = CreateDefaultSubobject<UVLevelChangeData>(TEXT("LevelChangeData"));
    this->CreatureBossDataTable = NULL;
    this->LevelCreatureBossDataTable = NULL;
}

void UVOblivionGameInstanceSubSystem::WriteAltarCrashInfos() {
}

void UVOblivionGameInstanceSubSystem::OnGarbageCollection() {
}


