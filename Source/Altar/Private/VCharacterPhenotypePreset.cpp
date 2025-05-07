#include "VCharacterPhenotypePreset.h"
#include "VCharacterPhenotypeData.h"

UVCharacterPhenotypePreset::UVCharacterPhenotypePreset() {
    this->PhenotypeData = CreateDefaultSubobject<UVCharacterPhenotypeData>(TEXT("Phenotype Data"));
}


