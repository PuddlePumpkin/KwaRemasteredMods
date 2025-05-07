#include "VActorValuesPairingComponent.h"

UVActorValuesPairingComponent::UVActorValuesPairingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UVActorValuesPairingComponent::UnBindOnAnyActorValueChanged(const FOnActorValueChanged& Callback) {
}

void UVActorValuesPairingComponent::UnBindOnActorValueChanged(EVActorValues ActorValueToListen, const FOnActorValueChanged& Callback) {
}

void UVActorValuesPairingComponent::NotifyAllNewValues() {
}

uint8 UVActorValuesPairingComponent::GetUIntModifiedActorValue(EVActorValues ValueWanted) const {
    return 0;
}

uint8 UVActorValuesPairingComponent::GetUIntBaseActorValue(EVActorValues ValueWanted) const {
    return 0;
}

EVSkillLevel UVActorValuesPairingComponent::GetModifiedSkillLevel(EVSkill Skill) const {
    return EVSkillLevel::Novice;
}

int32 UVActorValuesPairingComponent::GetIntModifiedActorValue(EVActorValues ValueWanted) const {
    return 0;
}

int32 UVActorValuesPairingComponent::GetIntBaseActorValue(EVActorValues ValueWanted) const {
    return 0;
}

float UVActorValuesPairingComponent::GetFloatModifiedActorValue(EVActorValues ValueWanted) const {
    return 0.0f;
}

float UVActorValuesPairingComponent::GetFloatBaseActorValue(EVActorValues ValueWanted) const {
    return 0.0f;
}

float UVActorValuesPairingComponent::GetEquippedEncumbrance() const {
    return 0.0f;
}

EVSkillLevel UVActorValuesPairingComponent::GetBaseSkillLevel(EVSkill Skill) const {
    return EVSkillLevel::Novice;
}

void UVActorValuesPairingComponent::BindOnAnyActorValueChanged(TSet<EVActorValues> ActorValuesToListen, const FOnActorValueChanged& Callback) {
}

void UVActorValuesPairingComponent::BindOnActorValueChanged(EVActorValues ActorValueToListen, const FOnActorValueChanged& Callback) {
}


