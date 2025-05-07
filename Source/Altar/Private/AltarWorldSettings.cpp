#include "AltarWorldSettings.h"

AAltarWorldSettings::AAltarWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bActiveSynchroLoadingLevel = false;
    this->bSetSpecificPlayerPostion = false;
    this->ExternCellX = 0;
    this->ExternCellY = 0;
    this->bSkipUIPopups = false;
}


