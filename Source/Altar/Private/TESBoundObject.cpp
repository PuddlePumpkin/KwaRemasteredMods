#include "TESBoundObject.h"
#include "VEnchantSaveData.h"

UTESBoundObject::UTESBoundObject() {
    this->bCanBeUsedAsPropItem = true;
    this->ImpactSystemDuration = -1.00f;
    this->Mass = 0.00f;
    this->bIsUsingCustomPhysicsControlSettings = false;
    this->InheritedModel = NULL;
    this->EnchantSaveData = CreateDefaultSubobject<UVEnchantSaveData>(TEXT("Enchant"));
    this->bIsEnchantedObject = false;
}

UClass* UTESBoundObject::GetPropBlueprintClass() const {
    return NULL;
}


