#include "TESLevCreature.h"
#include "TESLeveledList.h"

UTESLevCreature::UTESLevCreature() {
    this->InheritedLeveledList = CreateDefaultSubobject<UTESLeveledList>(TEXT("LeveledItems"));
}


