#include "AltarQMPAIController.h"
#include "VAltarPathFollowingComponent.h"

AAltarQMPAIController::AAltarQMPAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVAltarPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
}


