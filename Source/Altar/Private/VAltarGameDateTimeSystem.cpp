#include "VAltarGameDateTimeSystem.h"

UVAltarGameDateTimeSystem::UVAltarGameDateTimeSystem() {
}

int32 UVAltarGameDateTimeSystem::GetOblivionYear() const {
    return 0;
}

int32 UVAltarGameDateTimeSystem::GetOblivionMonth() const {
    return 0;
}

int32 UVAltarGameDateTimeSystem::GetOblivionGameDayPassed() const {
    return 0;
}

int32 UVAltarGameDateTimeSystem::GetOblivionDay() const {
    return 0;
}

FOblivionDateTimeInfo UVAltarGameDateTimeSystem::GetOblivionDateInfo() const {
    return FOblivionDateTimeInfo{};
}

UVAltarGameDateTimeSystem* UVAltarGameDateTimeSystem::Get(UWorld* World) {
    return NULL;
}


