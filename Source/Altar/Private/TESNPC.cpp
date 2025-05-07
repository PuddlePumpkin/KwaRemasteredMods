#include "TESNPC.h"

UTESNPC::UTESNPC() {
    this->InheritedRace = NULL;
    this->Sex = ECharacterSex::MALE;
    this->bUseDefaultRaceAndSexPreset = true;
    this->bUseProceduralHead = true;
    this->CharacterPhenotypeData = NULL;
}


