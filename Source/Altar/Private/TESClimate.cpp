#include "TESClimate.h"

UTESClimate::UTESClimate() {
    this->Preset = NULL;
    this->SunriseBegin = 0.00f;
    this->SunriseEnd = 0.00f;
    this->SunsetBegin = 0.00f;
    this->SunsetEnd = 0.00f;
    this->Volatility = 0;
    this->MoonPhasesDays = 0;
    this->bUseMasser = false;
    this->bUseSecunda = false;
}


