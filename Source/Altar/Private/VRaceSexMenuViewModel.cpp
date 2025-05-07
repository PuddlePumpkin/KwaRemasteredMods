#include "VRaceSexMenuViewModel.h"

UVRaceSexMenuViewModel::UVRaceSexMenuViewModel() {
    this->MaxNameLength = 24;
    this->PlayerCustomizationSession = NULL;
    this->CurrentPage = ELegacyRaceSexMenuPage::Main;
    this->CurrentArchetype = 0;
    this->CurrentSex = 0;
    this->CurrentRace = TEXT("Imperial");
    this->CurrentActorStats = NULL;
    this->CurrentHairName = FText::FromString(TEXT("Natural"));
}

void UVRaceSexMenuViewModel::UpdateWidgetPhenotypeData(bool bHardReset) {
}

void UVRaceSexMenuViewModel::UpdateRaceSexArchetype(FText NewRaceDescription, int32 RaceIndex, int32 SexIndex, int32 ArchetypeIndex, UTESRace* TESRacePtr, bool bUpdateCharacter) {
}

void UVRaceSexMenuViewModel::UpdatePhenotypeValue(const FName& ValueType, float Value, bool bUpdateCharacter) {
}

void UVRaceSexMenuViewModel::UpdateMorphTarget(FName TargetName, float TargetValue, bool bUpdateCharacter) {
}

void UVRaceSexMenuViewModel::UpdateHair(const UVCharacterHairPieceBase* HairPiece, int32 CustomisationIndex, bool bUpdateCharacter) {
}

void UVRaceSexMenuViewModel::UpdateEyeColor(UMaterialInterface* EyeMaterial, int32 CustomisationIndex, bool bUpdateCharacter) {
}

void UVRaceSexMenuViewModel::UpdateCustomisationTarget(const FLegacyRaceSexMenuToggleProperties& Property, int32 OptionIndex, bool bUpdateCharacter) {
}

void UVRaceSexMenuViewModel::UpdateColorTarget(const FName& ValueType, const FColor& TargetValue, bool bUpdateCharacter) {
}

void UVRaceSexMenuViewModel::UpdateArchetype(int32 ArchetypeIndex) {
}

void UVRaceSexMenuViewModel::SyncCharacterWithModel() {
}

void UVRaceSexMenuViewModel::SilentSetCurrentRace(const FString& NewRace) {
}

void UVRaceSexMenuViewModel::SetSave() {
}

void UVRaceSexMenuViewModel::SetRaceDescription(const FText& NewRaceDescription) {
}

void UVRaceSexMenuViewModel::SetPlayerNameLocalizationPair(const FPlayerNamePair& NewNamePair) {
}

void UVRaceSexMenuViewModel::SetPhenotypeData(const FRaceSexMenuPhenotypeData& NewPhenotypeData) {
}

void UVRaceSexMenuViewModel::SetCurrentSex(const int32& NewSex) {
}

void UVRaceSexMenuViewModel::SetCurrentRaceWithForceUpdate(const FString& NewRace) {
}

void UVRaceSexMenuViewModel::SetCurrentRace(const FString& NewRace) {
}

void UVRaceSexMenuViewModel::SetCurrentPage(ELegacyRaceSexMenuPage NewCurrentPage) {
}

void UVRaceSexMenuViewModel::SetCurrentName(const FText& NewName) {
}

void UVRaceSexMenuViewModel::SetCurrentHairName(const FText& NewName) {
}

void UVRaceSexMenuViewModel::SetCurrentArchetype(const int32& NewArchetype) {
}

void UVRaceSexMenuViewModel::SetArchetypesProperties(const TArray<FModernRaceSexMenuArchetypeProperties>& NewArchetypesProperties) {
}

void UVRaceSexMenuViewModel::SetActorStatsWrapper() {
}

void UVRaceSexMenuViewModel::SetActorStats(UVActorValuesPairingComponent* NewCurrentActorStats) {
}

void UVRaceSexMenuViewModel::ReturnToPreviousPage() {
}

void UVRaceSexMenuViewModel::Reset() {
}

void UVRaceSexMenuViewModel::RequestQuitDialog() const {
}

void UVRaceSexMenuViewModel::RequestColorPicker(bool bShouldShow, UUserWidget* Caller, const FModernRaceSexMenuColorProperties& Properties) {
}

void UVRaceSexMenuViewModel::RegisterSendDoneButtonHandler() {
}

void UVRaceSexMenuViewModel::Random() {
}

FLegacyRaceSexMenuToggleProperties UVRaceSexMenuViewModel::ParseToggleProperties(const FLegacyRaceSexMenuToggleProperties& TableProperties) {
    return FLegacyRaceSexMenuToggleProperties{};
}

FLegacyRaceSexMenuButtonProperties UVRaceSexMenuViewModel::ParseButtonProperties(const FLegacyRaceSexMenuButtonProperties& TableProperties) {
    return FLegacyRaceSexMenuButtonProperties{};
}

void UVRaceSexMenuViewModel::OnResetRefreshEnd() {
}

bool UVRaceSexMenuViewModel::IsGenericPageScrollboxValid(const FName& CategoryKey, UScrollBox* ScrollBox) const {
    return false;
}

FLegacyRaceSexMenuTableRow UVRaceSexMenuViewModel::GetToggleTableRowDataFromCommon(ELegacyRaceSexMenuToggleType Type) const {
    return FLegacyRaceSexMenuTableRow{};
}

FRaceSexMenuPhenotypeData UVRaceSexMenuViewModel::GetSyncedPhenotypeData() const {
    return FRaceSexMenuPhenotypeData{};
}

FLegacyRaceSexMenuTableRow UVRaceSexMenuViewModel::GetSliderTableRowDataFromCommon(const FName& MorphTarget) const {
    return FLegacyRaceSexMenuTableRow{};
}

TArray<FLegacyRaceSexMenuTableRow> UVRaceSexMenuViewModel::GetRaceTableRows(const FString& RaceName) const {
    return TArray<FLegacyRaceSexMenuTableRow>();
}

FLegacyRaceSexMenuRaceProperties UVRaceSexMenuViewModel::GetRaceModificationProperties(const FString& RaceName) const {
    return FLegacyRaceSexMenuRaceProperties{};
}

TArray<FLegacyRaceSexMenuTableRow> UVRaceSexMenuViewModel::GetRaceModificationItemsProperties(const FString& RaceName) const {
    return TArray<FLegacyRaceSexMenuTableRow>();
}

int32 UVRaceSexMenuViewModel::GetRaceId(const FString& RaceName) const {
    return 0;
}

FText UVRaceSexMenuViewModel::GetRaceDescription() const {
    return FText::GetEmpty();
}

FPlayerNamePair UVRaceSexMenuViewModel::GetPlayerNameLocalizationPair() const {
    return FPlayerNamePair{};
}

FRaceSexMenuPhenotypeData UVRaceSexMenuViewModel::GetPhenotypeData() const {
    return FRaceSexMenuPhenotypeData{};
}

TMap<FName, FText> UVRaceSexMenuViewModel::GetPagesOfCategory(const EModernRaceSexPage& CurrentPageToAnalyse) const {
    return TMap<FName, FText>();
}

int32 UVRaceSexMenuViewModel::GetCurrentSex() const {
    return 0;
}

FString UVRaceSexMenuViewModel::GetCurrentRace() const {
    return TEXT("");
}

ELegacyRaceSexMenuPage UVRaceSexMenuViewModel::GetCurrentPage() const {
    return ELegacyRaceSexMenuPage::Main;
}

FText UVRaceSexMenuViewModel::GetCurrentName() const {
    return FText::GetEmpty();
}

FText UVRaceSexMenuViewModel::GetCurrentHairName() const {
    return FText::GetEmpty();
}

int32 UVRaceSexMenuViewModel::GetCurrentHairIndex(bool bHardReset) {
    return 0;
}

int32 UVRaceSexMenuViewModel::GetCurrentArchetype() const {
    return 0;
}

TArray<FLegacyRaceSexMenuTableRow> UVRaceSexMenuViewModel::GetCommonCharacterModifications() const {
    return TArray<FLegacyRaceSexMenuTableRow>();
}

TArray<FModernRaceSexMenuArchetypeProperties> UVRaceSexMenuViewModel::GetArchetypesProperties() const {
    return TArray<FModernRaceSexMenuArchetypeProperties>();
}

TArray<FLegacyRaceSexMenuRaceProperties> UVRaceSexMenuViewModel::GetAllRaceModificationProperties() const {
    return TArray<FLegacyRaceSexMenuRaceProperties>();
}

UVActorValuesPairingComponent* UVRaceSexMenuViewModel::GetActorStats() const {
    return NULL;
}

void UVRaceSexMenuViewModel::CloseMenu(EVFadeTransitionType Type) {
}


