#include "CellInteriorData.h"

FCellInteriorData::FCellInteriorData() {
    this->Ambient = 0;
    this->Directional = 0;
    this->Fog = 0;
    this->FogNear = 0.00f;
    this->FogFar = 0.00f;
    this->DirectionalXY = 0;
    this->DirectionalZ = 0;
    this->DirectionalFade = 0.00f;
    this->ClipDist = 0.00f;
    this->InteriorOffset = 0;
}

