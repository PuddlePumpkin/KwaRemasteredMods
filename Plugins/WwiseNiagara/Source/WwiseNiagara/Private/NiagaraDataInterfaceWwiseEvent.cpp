#include "NiagaraDataInterfaceWwiseEvent.h"

UNiagaraDataInterfaceWwiseEvent::UNiagaraDataInterfaceWwiseEvent() {
    this->EventToPost = NULL;
    this->bLimitPostsPerTick = true;
    this->MaxPostsPerTick = 10;
    this->bStopWhenComponentIsDestroyed = true;
}


