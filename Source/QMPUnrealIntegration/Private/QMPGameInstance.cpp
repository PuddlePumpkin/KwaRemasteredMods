#include "QMPGameInstance.h"

UQMPGameInstance::UQMPGameInstance() {
    this->PlayerAIController = NULL;
    this->RecorderLoading = NULL;
    this->SpecificUtils = NULL;
    this->PlayerController = NULL;
    this->SubsegmentSavesManager = NULL;
}

void UQMPGameInstance::OnPawnControllerChange(APawn* Pawn, AController* Controller) {
}


