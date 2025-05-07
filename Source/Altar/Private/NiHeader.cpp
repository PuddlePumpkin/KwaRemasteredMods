#include "NiHeader.h"

UNiHeader::UNiHeader() {
    this->Version = 0;
    this->EndianTypeValue = EndianType::ENDIAN_BIG;
    this->UserVersion = 0;
    this->NumBlocks = 0;
    this->BSHeader = NULL;
    this->NumBlockTypes = 0;
    this->NumGroups = 0;
}


