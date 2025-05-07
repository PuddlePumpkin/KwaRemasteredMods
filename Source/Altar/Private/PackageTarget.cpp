#include "PackageTarget.h"

FPackageTarget::FPackageTarget() {
    this->Type = EPackageTargetType::REFERENCE;
    this->Value = 0;
    this->TargetObjectType = EPackageObjectType::NONE;
}

