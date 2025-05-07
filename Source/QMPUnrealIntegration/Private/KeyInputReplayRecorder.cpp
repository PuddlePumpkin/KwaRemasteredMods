#include "KeyInputReplayRecorder.h"

AKeyInputReplayRecorder::AKeyInputReplayRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TextRenderComponent = NULL;
    this->RecordSave = NULL;
    this->Time = 0.00f;
}


