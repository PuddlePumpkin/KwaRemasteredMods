#include "DebugMenuWidget.h"

UDebugMenuWidget::UDebugMenuWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->VerticalBox = NULL;
    this->LocalMapUIMaterial = NULL;
    this->ToggleInventoryPreviewDebugCheckbox = NULL;
    this->InventoryItemLocationOffsetHorizontalBox = NULL;
    this->InventoryItemRotationOffsetHorizontalBox = NULL;
    this->InventoryItemScaleOffsetHorizontalBox = NULL;
    this->ShowroomSubsystem = NULL;
}

void UDebugMenuWidget::ToggleShowroomPropsVisibility() {
}

void UDebugMenuWidget::ToggleShowroomLightsVisibility() {
}

void UDebugMenuWidget::ToggleLocalMapUIDisplay() {
}

void UDebugMenuWidget::ToggleLevelList() {
}

void UDebugMenuWidget::ToggleInventoryDebugMode() {
}

void UDebugMenuWidget::ToggleDebugMenu() {
}

void UDebugMenuWidget::SwitchShowroomSpawnType() {
}

void UDebugMenuWidget::SwitchShowroomBackground() {
}

void UDebugMenuWidget::SpawnCreature() {
}

void UDebugMenuWidget::SetUpperBody() {
}

void UDebugMenuWidget::SetTimeOfDay() {
}

void UDebugMenuWidget::SetShowroomSkylightIntensity() {
}

void UDebugMenuWidget::SetShowroomBackdropRotation() {
}

void UDebugMenuWidget::SetLowerBody() {
}

void UDebugMenuWidget::SetHelmet() {
}

void UDebugMenuWidget::SetHands() {
}

void UDebugMenuWidget::SetFeet() {
}

void UDebugMenuWidget::SetCharacterSex() {
}

void UDebugMenuWidget::SetCharacterRace() {
}

void UDebugMenuWidget::SetAmulet() {
}

void UDebugMenuWidget::SelectCreature() {
}

bool UDebugMenuWidget::RunDebugMenuCommand(FString& Command) {
    return false;
}

void UDebugMenuWidget::ReloadUI() {
}


void UDebugMenuWidget::OpenLevel() {
}

void UDebugMenuWidget::OnItemScaleOffsetZChanged(float InNewValue) {
}

void UDebugMenuWidget::OnItemScaleOffsetYChanged(float InNewValue) {
}

void UDebugMenuWidget::OnItemScaleOffsetXChanged(float InNewValue) {
}

void UDebugMenuWidget::OnItemRotationOffsetZChanged(float InNewValue) {
}

void UDebugMenuWidget::OnItemRotationOffsetYChanged(float InNewValue) {
}

void UDebugMenuWidget::OnItemRotationOffsetXChanged(float InNewValue) {
}

void UDebugMenuWidget::OnItemLocationOffsetZChanged(float InNewValue) {
}

void UDebugMenuWidget::OnItemLocationOffsetYChanged(float InNewValue) {
}

void UDebugMenuWidget::OnItemLocationOffsetXChanged(float InNewValue) {
}

void UDebugMenuWidget::HideDebugMenu() {
}

void UDebugMenuWidget::ExecuteUICommandLineFromComboBoxSelection() {
}

void UDebugMenuWidget::ExecuteSpawnObjectCommandLineFromComboBoxSelection() {
}

void UDebugMenuWidget::ExecuteSpawnActorCommandLineFromComboBoxSelection() {
}

void UDebugMenuWidget::ExecuteQACommandLineFromComboBoxSelection() {
}

void UDebugMenuWidget::ExecutePefCommandLineFromComboBoxSelection() {
}

void UDebugMenuWidget::ExecuteCommandLineFromComboBoxSelection() {
}

void UDebugMenuWidget::ExecuteAICommandLineFromComboBoxSelection() {
}

void UDebugMenuWidget::DisplayShowroomUI() {
}

void UDebugMenuWidget::DisplayDebugMenu(APlayerController* PlayerControllerDebug) {
}

void UDebugMenuWidget::ComboBoxCategoryDelegate() {
}


