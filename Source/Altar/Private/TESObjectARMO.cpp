#include "TESObjectARMO.h"
#include "TESBipedModelForm.h"

UTESObjectARMO::UTESObjectARMO() {
    this->InheritedBipedModel = CreateDefaultSubobject<UTESBipedModelForm>(TEXT("BipModel"));
    this->bIsShield = false;
}


