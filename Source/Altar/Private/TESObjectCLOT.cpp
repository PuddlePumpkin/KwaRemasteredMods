#include "TESObjectCLOT.h"
#include "TESBipedModelForm.h"

UTESObjectCLOT::UTESObjectCLOT() {
    this->InheritedBipedModel = CreateDefaultSubobject<UTESBipedModelForm>(TEXT("BipModel"));
}


