#include "VFreezeInMenuSubsystem.h"

UVFreezeInMenuSubsystem::UVFreezeInMenuSubsystem() {
}

void UVFreezeInMenuSubsystem::UnFreeze(const FName& FreezeName, bool bShouldUnfreezeOblivion) {
}

void UVFreezeInMenuSubsystem::SpareActorFromFreeze(AActor* ActorToAffect) {
}

void UVFreezeInMenuSubsystem::SetMode(TEnumAsByte<EVFreezeSubsystemMode> NewMode) {
}

void UVFreezeInMenuSubsystem::RequestMode(TEnumAsByte<EVFreezeSubsystemMode> NewMode) {
}

bool UVFreezeInMenuSubsystem::IsFreezing() const {
    return false;
}

bool UVFreezeInMenuSubsystem::IsActorFrozen(const AActor* Actor) const {
    return false;
}

TEnumAsByte<EVFreezeSubsystemMode> UVFreezeInMenuSubsystem::GetMode() const {
    return Normal;
}

FName UVFreezeInMenuSubsystem::GetCurrentFreezeName() const {
    return NAME_None;
}

void UVFreezeInMenuSubsystem::Freeze(const FName& FreezeName, bool bShouldFreezeOblivion) {
}


