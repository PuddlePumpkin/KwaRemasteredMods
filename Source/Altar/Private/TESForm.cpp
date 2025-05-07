#include "TESForm.h"

UTESForm::UTESForm() {
    this->m_formID = 0;
    this->m_formType = FormID::NO_FORM;
    this->m_formFlags = 0;
    this->bCanBeUsedAsPropItem = false;
    this->BSXFlags = 0;
}

void UTESForm::UpdateBlueprintClassesPostEdit() {
}

bool UTESForm::GetTemporary() const {
    return false;
}

bool UTESForm::GetMaster() const {
    return false;
}

FString UTESForm::GetHexFormID() const {
    return TEXT("");
}

FString UTESForm::GetFormTypeStringFromFlags() const {
    return TEXT("");
}

FString UTESForm::GetFormTypeString() const {
    return TEXT("");
}

FormID UTESForm::GetFormTypeFromFormString(int64 formString) {
    return FormID::NO_FORM;
}

FormID UTESForm::GetFormType() const {
    return FormID::NO_FORM;
}

int64 UTESForm::GetFormFlags() const {
    return 0;
}

FString UTESForm::GetFormEditorID() const {
    return TEXT("");
}

FString UTESForm::GetFormDetailedString() {
    return TEXT("");
}

TSoftClassPtr<AVActor> UTESForm::GetEquipableBlueprintClass() {
    return NULL;
}

bool UTESForm::GetDelete() {
    return false;
}

UClass* UTESForm::GetComponent() {
    return NULL;
}

int64 UTESForm::GetBPFormID() const {
    return 0;
}

bool UTESForm::CanFormBeUsedAsPropItem() const {
    return false;
}


