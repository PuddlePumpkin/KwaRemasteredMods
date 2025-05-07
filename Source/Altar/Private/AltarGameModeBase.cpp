#include "AltarGameModeBase.h"
#include "VAltarPlayerController.h"
#include "VPairedPawn.h"

AAltarGameModeBase::AAltarGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AVAltarPlayerController::StaticClass();
    this->DefaultPawnClass = AVPairedPawn::StaticClass();
    this->bUseSeamlessTravel = true;
    this->bShouldUseUnrealDebugTool = false;
    this->BackupNavMeshBoundsVolumeActor = NULL;
    this->bShouldUseDetourCrowdBehaviour = false;
}


