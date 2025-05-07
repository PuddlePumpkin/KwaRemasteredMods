#include "TESActorBase.h"
#include "TESActorBaseData.h"

UTESActorBase::UTESActorBase() {
    this->InheritedActorBaseData = CreateDefaultSubobject<UTESActorBaseData>(TEXT("BaseData"));
}


