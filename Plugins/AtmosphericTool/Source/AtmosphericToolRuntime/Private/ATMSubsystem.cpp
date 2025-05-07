#include "ATMSubsystem.h"

UATMSubsystem::UATMSubsystem() {
    this->LastActiveGlobalInstance = NULL;
    this->ATMActor = NULL;
}

void UATMSubsystem::SetTime(float NewTime, EATMTimeUpdateSource NewUpdateSource) {
}

void UATMSubsystem::SetReferencePosition(FVector position) {
}

void UATMSubsystem::SetDeltaTime(float NewDeltaTime, float NewTimeOfDay, EATMTimeUpdateSource NewUpdateSource) {
}

float UATMSubsystem::GetTime() {
    return 0.0f;
}

FVector UATMSubsystem::GetReferencePosition() {
    return FVector{};
}

float UATMSubsystem::GetDeltaTime() {
    return 0.0f;
}

AATMTimeOfDayActor* UATMSubsystem::GetATMActor() {
    return NULL;
}

UATMSubsystem* UATMSubsystem::Get(UObject* WorldContextObject) {
    return NULL;
}

UATMPresetInstance* UATMSubsystem::AddActivePreset(const FString& PresetName) {
    return NULL;
}


