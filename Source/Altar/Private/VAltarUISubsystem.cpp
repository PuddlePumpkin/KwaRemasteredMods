#include "VAltarUISubsystem.h"

UVAltarUISubsystem::UVAltarUISubsystem() {
    this->PrimaryHud = NULL;
    this->MenuDefaultsTable = NULL;
    this->bIsInputHintsVisible = true;
    this->bIsHUDVisible = true;
    this->bIsMenuVisible = false;
    this->SavePlayerLevel = 0;
    this->UpdatedPlayerLevel = 0;
    this->CurrentLoadingScreenLoadContext = ELoadingScreenType::FromLoadingGame;
    this->InventoryHoveredObjectActor = NULL;
    this->InventoryHoveredObjectForm = NULL;
    this->LastPlayerMenuTab = ELegacyPlayerMenuPage::Stats;
}

void UVAltarUISubsystem::UnregisterGlobalLightingActor(AVGlobalLighting* InGlobalLightingActor) {
}

void UVAltarUISubsystem::UnregisterExponentialHeightFog(AExponentialHeightFog* InExponentialHeightFog) {
}

void UVAltarUISubsystem::TryGetBrushFromKey(FKey InKey, FSlateBrush& OutBrush) {
}

void UVAltarUISubsystem::ToggleInputHintVisibility(bool bIsVisible) {
}

void UVAltarUISubsystem::ToggleHUDVisibility(bool bIsVisible) {
}

void UVAltarUISubsystem::SetPlayerNameTextFromLastLoadedSave(const FText& InNewPlayerName) {
}

void UVAltarUISubsystem::SetPlayerLevelFromLevelUp(const int32 InNewPlayerLevel) {
}

void UVAltarUISubsystem::SetPlayerLevelFromLastLoadedSave(const int32 InNewPlayerLevel) {
}

void UVAltarUISubsystem::SetInventoryHoveredObjectForm(UTESForm* InNewForm) {
}

void UVAltarUISubsystem::SetInventoryHoveredObjectActor(AActor* InNewActor) {
}

void UVAltarUISubsystem::SetCurrentLoadingScreenContext(const ELoadingScreenType InNewLoadingScreenContext) {
}

void UVAltarUISubsystem::RegisterGlobalLightingActor(AVGlobalLighting* InNewGlobalLightingActor) {
}

void UVAltarUISubsystem::RegisterExponentialHeightFog(AExponentialHeightFog* InNewExponentialHeightFog) {
}

bool UVAltarUISubsystem::IsMenuVisible() const {
    return false;
}

bool UVAltarUISubsystem::IsInputHintsVisible() const {
    return false;
}

bool UVAltarUISubsystem::IsHUDVisible() const {
    return false;
}

UVPrimaryGameLayout* UVAltarUISubsystem::GetPrimaryGameLayout() const {
    return NULL;
}

FText UVAltarUISubsystem::GetPlayerNameTextFromLastLoadedSave() const {
    return FText::GetEmpty();
}

int32 UVAltarUISubsystem::GetPlayerLevelFromLastLoadedSave() const {
    return 0;
}

EModernCategoryPlatormFlag UVAltarUISubsystem::GetPlatformTag() const {
    return EModernCategoryPlatormFlag::NONE;
}

FGameplayTag UVAltarUISubsystem::GetMenuDefaultLayer(TSoftClassPtr<UVAltarMenu> MenuClass) const {
    return FGameplayTag{};
}

TSoftClassPtr<UVAltarMenu> UVAltarUISubsystem::GetMenuDefaultClass(TSoftClassPtr<UVAltarMenu> MenuClass) const {
    return NULL;
}

UTESForm* UVAltarUISubsystem::GetInventoryHoveredObjectForm() const {
    return NULL;
}

AActor* UVAltarUISubsystem::GetInventoryHoveredObjectActor() const {
    return NULL;
}

TArray<AVGlobalLighting*> UVAltarUISubsystem::GetGlobalLightingActors() const {
    return TArray<AVGlobalLighting*>();
}

int32 UVAltarUISubsystem::GetCurrentUpdatedPlayerLevel() const {
    return 0;
}

ELoadingScreenType UVAltarUISubsystem::GetCurrentLoadingScreenContext() const {
    return ELoadingScreenType::FromLoadingGame;
}

EVCountryGroup UVAltarUISubsystem::GetCoutryGroup() const {
    return EVCountryGroup::SIEA;
}

TArray<AExponentialHeightFog*> UVAltarUISubsystem::GetAllExponentialHeightFogs() const {
    return TArray<AExponentialHeightFog*>();
}

void UVAltarUISubsystem::ForceUIInputMode(bool bShowMouseCursor) {
}

void UVAltarUISubsystem::ForceGameplayInputMode() {
}


