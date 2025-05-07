#include "UE5AltarPairingActor.h"
#include "Components/InputComponent.h"

AUE5AltarPairingActor::AUE5AltarPairingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputComponent = CreateDefaultSubobject<UInputComponent>(TEXT("Input Component"));
}


