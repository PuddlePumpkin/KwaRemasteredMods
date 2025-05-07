#include "AltarBISubsystem.h"

UAltarBISubsystem::UAltarBISubsystem() {
    this->bAlterBIEnabledInBuild = true;
    this->AlterBIRetryDelayMS = 3000;
    this->AlterBIEventBufferSize = 1048576;
    this->AlterBIResetSessionSuspendTimeSec = 900;
    this->m_biEventManager = NULL;
}


