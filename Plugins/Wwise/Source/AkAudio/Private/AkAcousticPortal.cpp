#include "AkAcousticPortal.h"
#include "AkPortalComponent.h"

AAkAcousticPortal::AAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Portal = CreateDefaultSubobject<UAkPortalComponent>(TEXT("PortalComponent"));
    this->InitialState = AkAcousticPortalState::Closed;
    this->bRequiresStateMigration = false;
    this->Portal->SetupAttachment(RootComponent);
}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::EnablePortal() {
}

void AAkAcousticPortal::DisablePortal() {
}


