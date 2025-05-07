#include "SkillsMenuItemProperties.h"

FSkillsMenuItemProperties::FSkillsMenuItemProperties() {
    this->Picture = NULL;
    this->SpecializationEnum = ESkillAndClassSpecialization::Combat;
    this->bIsSelected = false;
    this->ID = 0;
    this->SkillStatEnum = ESkillStat::DO_NOT_USE;
}

