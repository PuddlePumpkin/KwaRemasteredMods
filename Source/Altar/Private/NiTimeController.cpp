#include "NiTimeController.h"

UNiTimeController::UNiTimeController() {
    this->NextController = NULL;
    this->Frequency = 0.00f;
    this->Phase = 0.00f;
    this->StartTime = 0.00f;
    this->StopTime = 0.00f;
    this->Target = NULL;
}


