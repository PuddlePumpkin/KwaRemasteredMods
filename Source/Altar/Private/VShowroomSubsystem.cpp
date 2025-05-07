#include "VShowroomSubsystem.h"

UVShowroomSubsystem::UVShowroomSubsystem() {
    this->SpawnDistanceFactor = 250.00f;
    this->SkySphereMID = NULL;
}

AActor* UVShowroomSubsystem::SpawnBlueprintActor(const FString& BlueprintPath) {
    return NULL;
}

void UVShowroomSubsystem::SpawnAnimatedActor(const FString& BlueprintPath, const FString& AnimationPath) {
}

TArray<AActor*> UVShowroomSubsystem::SpawnActorsByAssetsPath(const TArray<FString>& InPaths, const FVector& CenterPoint, const FVector& BoxExtent, int32 Offset, bool& bRemainNotSpawned, TArray<FString>& OutPaths) {
    return TArray<AActor*>();
}

void UVShowroomSubsystem::SetSkylightIntensity(float Intensity) {
}

void UVShowroomSubsystem::SetPropsHidden(bool bHidden) {
}

void UVShowroomSubsystem::SetLightsHidden(bool bHidden) {
}

void UVShowroomSubsystem::SetHDRIRotation(float Rotation) {
}

void UVShowroomSubsystem::SetCharacterSex(bool bIsMale) {
}

void UVShowroomSubsystem::SetCharacterRace(const FString& RaceFormPath) {
}

void UVShowroomSubsystem::SetCharacterBodyPart(EBipedModularBodySlot Slot, const FString& FormPath) {
}

void UVShowroomSubsystem::SetBackgroundHDRI(const FString& HDRITexturePath) {
}

void UVShowroomSubsystem::SetActorAnimation(AActor* SpawnedActor, const FString& AnimationPath) {
}

void UVShowroomSubsystem::RemoveCharacterBodyPart(EBipedModularBodySlot Slot) {
}

void UVShowroomSubsystem::HideDefaultBackgroundScene(bool bHidden) {
}

AActor* UVShowroomSubsystem::GetTargetPoint() const {
    return NULL;
}

AVPairedCharacter* UVShowroomSubsystem::GetShowroomCharacter() const {
    return NULL;
}

void UVShowroomSubsystem::CreateShowroomCharacter() {
}

FVector UVShowroomSubsystem::CalculateSpawnLocation() {
    return FVector{};
}


