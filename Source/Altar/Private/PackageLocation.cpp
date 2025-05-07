#include "PackageLocation.h"

FPackageLocation::FPackageLocation() {
    this->Type = EPackageLocationType::REFERENCE;
    this->Radius = 0;
    this->ObjectType = EPackageObjectType::NONE;
}

