#include "NiGeometryData.h"

UNiGeometryData::UNiGeometryData() {
    this->GroupIDGeometryData = 0;
    this->NumVertices = 0;
    this->KeepFlags = 0;
    this->CompressFlags = 0;
    this->HasVertices = false;
    this->DataFlags = 0;
    this->HasNormals = false;
    this->HasColor = false;
    this->DirtyFlags = 0;
    this->AdditionalData = NULL;
}


