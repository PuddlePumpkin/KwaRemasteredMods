#include "VPrimitiveComponentDebugData.h"

UVPrimitiveComponentDebugData::UVPrimitiveComponentDebugData() {
    this->Mobility = EComponentMobility::Static;
    this->bDoesGenerateOverlapEvents = false;
    this->bCanEverAffectNavigation = false;
    this->bIsAllowedToSimulate = false;
}


