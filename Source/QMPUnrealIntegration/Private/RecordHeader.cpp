#include "RecordHeader.h"

FRecordHeader::FRecordHeader() {
    this->bGodModeAtStart = false;
    this->bLastChunkCompressed = false;
    this->EndTime = 0.00f;
}

