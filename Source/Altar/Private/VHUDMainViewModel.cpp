#include "VHUDMainViewModel.h"

UVHUDMainViewModel::UVHUDMainViewModel() {
    this->HealthBarValue = 0.00f;
    this->MagickaBarValue = 0.00f;
    this->FatigueBarValue = 0.00f;
    this->CurrentMagickaValue = 0.00f;
    this->MaxMagickaValue = 0.00f;
    this->CompassDirectionValue = 0.00f;
    this->ThirdPersonCompassOffset = 0.00f;
    this->bLevelUpIconVisibility = false;
    this->WeaponIcon = NULL;
    this->WeaponStatus = 0;
    this->SpellIcon = NULL;
    this->WeaponHealth = 0.00f;
    this->WeaponAmmo = 0.00f;
    this->bIsRegionNewlyDiscovered = false;
    this->bCanBeCast = false;
    this->bIsMenuMode = false;
    this->bIsOverencumbered = false;
    this->bIsBrokenWeaponVisible = false;
    this->bIsWeaponChargeVisible = false;
    this->bIsHealthBarBlinking = false;
    this->bIsTrespassing = false;
    this->bShouldDisplayBloodVignette = false;
}

bool UVHUDMainViewModel::ThisIsForPluginCompliance() const {
    return false;
}

void UVHUDMainViewModel::SetIsMenuMode(bool bNewValue) {
}

void UVHUDMainViewModel::SetHostileData(const TArray<FHostileData>& InHostileData) {
}

void UVHUDMainViewModel::SetCompassIconMarkers(const TArray<FCompassIconMarker>& IconMarkers) {
}

int32 UVHUDMainViewModel::GetWeaponStatus() const {
    return 0;
}

UTexture2D* UVHUDMainViewModel::GetWeaponIcon() const {
    return NULL;
}

float UVHUDMainViewModel::GetWeaponHealth() const {
    return 0.0f;
}

bool UVHUDMainViewModel::GetWeaponChargeVisibility() const {
    return false;
}

FWeaponChargeParams UVHUDMainViewModel::GetWeaponChargeParams() const {
    return FWeaponChargeParams{};
}

float UVHUDMainViewModel::GetWeaponAmmo() const {
    return 0.0f;
}

float UVHUDMainViewModel::GetThirdPersonCompassOffset() const {
    return 0.0f;
}

UTexture2D* UVHUDMainViewModel::GetSpellIcon() const {
    return NULL;
}

FModernSkillProgression UVHUDMainViewModel::GetSkillProgression() const {
    return FModernSkillProgression{};
}

bool UVHUDMainViewModel::GetShouldDisplayBloodVignette() const {
    return false;
}

FText UVHUDMainViewModel::GetRegionText() const {
    return FText::GetEmpty();
}

bool UVHUDMainViewModel::GetOverencumberedVisibility() const {
    return false;
}

bool UVHUDMainViewModel::GetNewlyDiscovered() const {
    return false;
}

float UVHUDMainViewModel::GetMaxMagickaValue() const {
    return 0.0f;
}

float UVHUDMainViewModel::GetMagickaBarValue() const {
    return 0.0f;
}

bool UVHUDMainViewModel::GetLevelUpIconVisibility() const {
    return false;
}

bool UVHUDMainViewModel::GetIsTrespassing() const {
    return false;
}

bool UVHUDMainViewModel::GetIsMenuMode() const {
    return false;
}

bool UVHUDMainViewModel::GetIsHealthBarBlinking() const {
    return false;
}

TArray<FHostileData> UVHUDMainViewModel::GetHostileData() const {
    return TArray<FHostileData>();
}

float UVHUDMainViewModel::GetHealthBarValue() const {
    return 0.0f;
}

float UVHUDMainViewModel::GetFatigueBarValue() const {
    return 0.0f;
}

TArray<double> UVHUDMainViewModel::GetEffectsTimeLeft() const {
    return TArray<double>();
}

TArray<UTexture2D*> UVHUDMainViewModel::GetEffectsIcons() const {
    return TArray<UTexture2D*>();
}

float UVHUDMainViewModel::GetCurrentMagickaValue() const {
    return 0.0f;
}

TArray<FCompassIconMarker> UVHUDMainViewModel::GetCompassIconMarkers() const {
    return TArray<FCompassIconMarker>();
}

float UVHUDMainViewModel::GetCompassDirectionValue() const {
    return 0.0f;
}

bool UVHUDMainViewModel::GetCanBeCast() const {
    return false;
}

bool UVHUDMainViewModel::GetBrokenWeaponVisibility() const {
    return false;
}

FModernApparelData UVHUDMainViewModel::GetApparelData() const {
    return FModernApparelData{};
}

float UVHUDMainViewModel::ComputeRelativeMarkerXPosition(const FCompassIconMarker& CompassIconMarker, float Heading) {
    return 0.0f;
}

float UVHUDMainViewModel::ComputeCompassMarkerXPosition(const FCompassIconMarker& CompassIconMarker, float Heading, float Ratio) {
    return 0.0f;
}

bool UVHUDMainViewModel::CheckForNewArea(const FText& AreaName) {
    return false;
}


