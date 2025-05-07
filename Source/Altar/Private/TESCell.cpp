#include "TESCell.h"

UTESCell::UTESCell() {
    this->CellFlags = 0;
    this->WorldSpace = NULL;
    this->PathGrid = NULL;
}

bool UTESCell::IsPersistent() const {
    return false;
}

bool UTESCell::IsInterior() const {
    return false;
}

bool UTESCell::HasWater() const {
    return false;
}

UTESLandscape* UTESCell::GetLandscape() const {
    return NULL;
}

int32 UTESCell::GetDataY() const {
    return 0;
}

int32 UTESCell::GetDataX() const {
    return 0;
}


