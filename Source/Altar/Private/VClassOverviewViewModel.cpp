#include "VClassOverviewViewModel.h"

UVClassOverviewViewModel::UVClassOverviewViewModel() {
}

void UVClassOverviewViewModel::SetSpecializationEnum(ESkillAndClassSpecialization NewSpecializationEnum) {
}

void UVClassOverviewViewModel::SetSecondaryAttribute(const FText& NewAttribute) {
}

void UVClassOverviewViewModel::SetPrimaryAttribute(const FText& NewAttribute) {
}

void UVClassOverviewViewModel::SetClassSpecialisation(const FText& NewSpecialisation) {
}

void UVClassOverviewViewModel::SetClassProperties(const FPlayerClassItemProperties& NewClassProperties) {
}

void UVClassOverviewViewModel::SetClassPicture(UTexture2D* NewPicture) {
}

void UVClassOverviewViewModel::SetClassName(const FText& NewName) {
}

void UVClassOverviewViewModel::RemoveClassSkill(const FSkillInformation& SkillToRemove) {
}

FPlayerClassItemProperties UVClassOverviewViewModel::GetClassProperties() const {
    return FPlayerClassItemProperties{};
}

void UVClassOverviewViewModel::ClearClassSkills() {
}

void UVClassOverviewViewModel::ClearClassAttributes() {
}

void UVClassOverviewViewModel::AddClassSkill(const FSkillInformation& SkillToAdd) {
}


