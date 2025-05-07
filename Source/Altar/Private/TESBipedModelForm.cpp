#include "TESBipedModelForm.h"

UTESBipedModelForm::UTESBipedModelForm() {
    this->BipedObjectSlots = 0;
    this->Flags = 0;
    this->BodyPartActorClass = NULL;
    this->BipedModel.AddDefaulted(2);
    this->WorldModel.AddDefaulted(2);
    this->InventoryIcon.AddDefaulted(2);
}


