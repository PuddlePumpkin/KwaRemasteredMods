#include "AltarGameUserSetting.h"
#include "VAltarGraphicsSettingManager.h"

UAltarGameUserSetting::UAltarGameUserSetting() {
    this->VersionNumber = 0;
    this->PerformanceMode = EPerformanceMode::PERFORMANCEMODE_PERFORMANCE;
    this->GraphicsSettingManager = CreateDefaultSubobject<UVAltarGraphicsSettingManager>(TEXT("GraphicsSettingManager"));
    this->bIsOnboardingBrighnessSettingsDone = false;
    this->bIsOnboardingGameplaySettingsDone = false;
    this->bIsOnboardingSoundSettingsDone = false;
    this->bIsEULAAccepted = false;
    this->bShouldDoFirstTimeAutoDetect = true;
    this->SettingPageTable = NULL;
}

void UAltarGameUserSetting::ValidateOnboardingSoundSettings() {
}

void UAltarGameUserSetting::ValidateOnboardingGameplaySettings() {
}

void UAltarGameUserSetting::ValidateOnboardingBrighnessSettings() {
}

void UAltarGameUserSetting::ResetSettingsToDefault() {
}

void UAltarGameUserSetting::ResetBindingsToDefault() {
}

bool UAltarGameUserSetting::IsOnboardingSettingsDone() const {
    return false;
}

bool UAltarGameUserSetting::IsEULAAccepted() const {
    return false;
}

UVModernSettingPageTable* UAltarGameUserSetting::GetSettingPageTable() const {
    return NULL;
}

TMap<FString, FString> UAltarGameUserSetting::GetSavedSettings() const {
    return TMap<FString, FString>();
}

FKey UAltarGameUserSetting::GetSavedKeyForBind(UInputMappingContext* MappingContext, UInputAction* InputAction, ERebindSaveSlot Slot) {
    return FKey{};
}

FString UAltarGameUserSetting::GetOrAddValueFromSavedSettings(const FString& Command) {
    return TEXT("");
}

FEnhancedActionKeyMapping UAltarGameUserSetting::GetOrAddRebindFromSaved(UInputMappingContext* MappingContext, UInputAction* InputAction, ERebindSaveSlot Slot) {
    return FEnhancedActionKeyMapping{};
}

UAltarGameUserSetting* UAltarGameUserSetting::GetInstance() {
    return NULL;
}

TMap<FString, FString> UAltarGameUserSetting::GetDefaultSavedSettings() const {
    return TMap<FString, FString>();
}

TMap<FString, FVAltarRebindMap> UAltarGameUserSetting::GetDefaultSavedRebind() const {
    return TMap<FString, FVAltarRebindMap>();
}

void UAltarGameUserSetting::DoAutoDetect(bool bForceSync) {
}

void UAltarGameUserSetting::ApplyAltarRebind() {
}

void UAltarGameUserSetting::ApplyAltarCVARSettings(bool bForce) {
}

void UAltarGameUserSetting::AddOrUpdateSettingsToSave(const FModernSettingCommand& Settings) {
}

void UAltarGameUserSetting::AddOrUpdateRebindToSave(UInputMappingContext* MappingContext, UInputAction* InputAction, const FKey& Key, ERebindSaveSlot Slot) {
}

void UAltarGameUserSetting::AcceptEULA() {
}


