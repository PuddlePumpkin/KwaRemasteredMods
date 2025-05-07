#include "LegacyBookTagProperties.h"

FLegacyBookTagProperties::FLegacyBookTagProperties() {
    this->TagType = ELegacyBookTagType::Font;
    this->FontObject = NULL;
    this->AlignmentValue = ELegacyBookStylizedTextAlignment::Left;
}

