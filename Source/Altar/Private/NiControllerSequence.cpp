#include "NiControllerSequence.h"

UNiControllerSequence::UNiControllerSequence() {
    this->Weight = 0.00f;
    this->TextKeysNiControllerSequence = NULL;
    this->Cycle = CycleType::CYCLE_LOOP;
    this->Frequency = 0.00f;
    this->Phase = 0.00f;
    this->StartTime = 0.00f;
    this->StopTime = 0.00f;
    this->PlayBackwards = false;
    this->Manager = NULL;
    this->Accum = (AccumFlags)0;
    this->StringPalette = NULL;
    this->AnimNotes = NULL;
    this->NumAnimNoteArrays = 0;
}


