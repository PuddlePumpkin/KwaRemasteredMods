#include "VSpellMakingEnchantingViewModel.h"

UVSpellMakingEnchantingViewModel::UVSpellMakingEnchantingViewModel() {
    this->MagickaCost = 0;
    this->MaxMagickaCost = 0;
    this->MagickaCostVisibility = false;
    this->bIsConstantEffect = false;
    this->bIsExceedingMaxMagickaCost = false;
    this->MaxUsage = 0;
    this->MaxUsageVisibility = false;
    this->GoldCost = 0;
    this->GoldCostVisibility = true;
    this->PlayerGold = 0;
    this->PlayerGoldVisibility = true;
    this->bGoldCostIsExceedingPlayerGold = false;
}

void UVSpellMakingEnchantingViewModel::SetPlayerGoldVisibility(bool NewVisibility) {
}

void UVSpellMakingEnchantingViewModel::SetPlayerGold(int32 NewPlayerGold) {
}

void UVSpellMakingEnchantingViewModel::SetMaxUsageVisibility(bool NewVisibility) {
}

void UVSpellMakingEnchantingViewModel::SetMaxUsage(int32 NewMaxUsage) {
}

void UVSpellMakingEnchantingViewModel::SetMaxMagickaCost(int32 NewMaxMagickaCost) {
}

void UVSpellMakingEnchantingViewModel::SetMagickaCostVisibility(bool NewVisibility) {
}

void UVSpellMakingEnchantingViewModel::SetMagickaCost(int32 NewMagickaCost) {
}

void UVSpellMakingEnchantingViewModel::SetIsExceedingMaxMagickaCost(bool NewValue) {
}

void UVSpellMakingEnchantingViewModel::SetIsConstantEffect(bool NewValue) {
}

void UVSpellMakingEnchantingViewModel::SetGoldCostVisibility(bool NewVisibility) {
}

void UVSpellMakingEnchantingViewModel::SetGoldCostIsExceedingPlayerGold(bool NewValue) {
}

void UVSpellMakingEnchantingViewModel::SetGoldCost(int32 NewGoldCost) {
}

bool UVSpellMakingEnchantingViewModel::PlayerGoldIsVisibile() const {
    return false;
}

bool UVSpellMakingEnchantingViewModel::MaxUsageIsVisibile() const {
    return false;
}

bool UVSpellMakingEnchantingViewModel::MagickaCostIsVisibile() const {
    return false;
}

bool UVSpellMakingEnchantingViewModel::IsExceedingMaxMagickaCost() const {
    return false;
}

bool UVSpellMakingEnchantingViewModel::IsConstantEffect() const {
    return false;
}

bool UVSpellMakingEnchantingViewModel::GoldCostIsVisibile() const {
    return false;
}

bool UVSpellMakingEnchantingViewModel::GoldCostIsExceedingPlayerGold() const {
    return false;
}

int32 UVSpellMakingEnchantingViewModel::GetPlayerGold() const {
    return 0;
}

int32 UVSpellMakingEnchantingViewModel::GetMaxUsage() const {
    return 0;
}

int32 UVSpellMakingEnchantingViewModel::GetMaxMagickaCost() const {
    return 0;
}

int32 UVSpellMakingEnchantingViewModel::GetMagickaCost() const {
    return 0;
}

int32 UVSpellMakingEnchantingViewModel::GetGoldCost() const {
    return 0;
}


