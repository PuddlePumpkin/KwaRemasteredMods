#include "VCharacterFaceMorphsSource.h"
#include "VOblivionToAltarFaceMorphsConversionMap.h"

UVCharacterFaceMorphsSource::UVCharacterFaceMorphsSource() {
    this->OblivionFaceMorphsConversionMap = CreateDefaultSubobject<UVOblivionToAltarFaceMorphsConversionMap>(TEXT("OblivionToAltarMorphConversionMap"));
}


