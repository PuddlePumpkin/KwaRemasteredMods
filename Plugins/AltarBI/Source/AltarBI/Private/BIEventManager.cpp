#include "BIEventManager.h"

UBIEventManager::UBIEventManager() {
    this->BIEventBulkSendRateMS = 10000;
    this->MaxNumberOfBulkBIEventsCallsPerFrame = 2;
    this->ForceWaitCallbackTimeoutMS = 5000;
}


