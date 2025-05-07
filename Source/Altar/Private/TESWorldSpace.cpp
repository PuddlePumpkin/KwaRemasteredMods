#include "TESWorldSpace.h"

UTESWorldSpace::UTESWorldSpace() {
    this->Flags = 0;
    this->Climate = NULL;
    this->WorldWater = NULL;
    this->ParentWorld = NULL;
    this->Texture = NULL;
    this->PersistentCell = NULL;
}

int32 UTESWorldSpace::GetCellsGridSizeY() const {
    return 0;
}

int32 UTESWorldSpace::GetCellsGridSizeX() const {
    return 0;
}

int32 UTESWorldSpace::GetCellsGridMinY() const {
    return 0;
}

int32 UTESWorldSpace::GetCellsGridMinX() const {
    return 0;
}

int32 UTESWorldSpace::GetCellsGridMaxY() const {
    return 0;
}

int32 UTESWorldSpace::GetCellsGridMaxX() const {
    return 0;
}

UTESCell* UTESWorldSpace::GetCellAtGridXY(int32 X, int32 Y) {
    return NULL;
}


