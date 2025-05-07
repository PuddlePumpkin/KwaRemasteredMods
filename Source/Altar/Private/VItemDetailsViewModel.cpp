#include "VItemDetailsViewModel.h"

UVItemDetailsViewModel::UVItemDetailsViewModel() {
    this->WeaponCharge = -99;
    this->WeaponMaxCharge = -99;
    this->WeaponUse = -99;
    this->SoulgemCapacity = -99;
    this->SoulgemMaxCapacity = -99;
    this->bIsSoulgemUsable = false;
    this->bIsStoneUsable = false;
    this->bIsAlchemyToolUsable = false;
    this->bIsRepairHammerUsable = false;
    this->bIsLightArmor = false;
    this->ArmorPart = EOriginalInventoryMenuArmorClothPart::None;
    this->ClothPart = EOriginalInventoryMenuArmorClothPart::None;
    this->PotionType = EOriginalInventoryMenuPotionType::None;
    this->BookType = EOriginalInventoryMenuBookType::None;
    this->HoveredObjectTESForm = NULL;
}

void UVItemDetailsViewModel::SetWeaponUse(int32 NewWeaponUse) {
}

void UVItemDetailsViewModel::SetWeaponMaxCharge(int32 NewWeaponMaxCharge) {
}

void UVItemDetailsViewModel::SetWeaponCharge(int32 NewWeaponCharge) {
}

void UVItemDetailsViewModel::SetSoulgemMaxCapacity(int32 NewSoulgemMaxCapacity) {
}

void UVItemDetailsViewModel::SetSoulgemLevel(const FText& NewSoulgemLevel) {
}

void UVItemDetailsViewModel::SetSoulgemCapacity(int32 NewSoulgemCapacity) {
}

void UVItemDetailsViewModel::SetPotionType(EOriginalInventoryMenuPotionType NewPotionType) {
}

void UVItemDetailsViewModel::SetItemSkillInformations(const FOriginalInventoryMenuItemSkillInformations NewSkillInformations) {
}

void UVItemDetailsViewModel::SetIsStoneUsable(bool bNewIsUsable) {
}

void UVItemDetailsViewModel::SetIsSoulgemUsable(bool bNewIsUsable) {
}

void UVItemDetailsViewModel::SetIsRepairHammerUsable(bool bNewIsUsable) {
}

void UVItemDetailsViewModel::SetIsLightArmor(bool bNewIsLightArmor) {
}

void UVItemDetailsViewModel::SetIsAlchemyToolUsable(bool bNewIsUsable) {
}

void UVItemDetailsViewModel::SetHoveredObjectTESForm(UTESForm* NewForm) {
}

void UVItemDetailsViewModel::SetClothPart(EOriginalInventoryMenuArmorClothPart NewClothPart) {
}

void UVItemDetailsViewModel::SetBookType(EOriginalInventoryMenuBookType NewBookType) {
}

void UVItemDetailsViewModel::SetArmorPart(EOriginalInventoryMenuArmorClothPart NewArmorPart) {
}

int32 UVItemDetailsViewModel::GetWeaponUse() const {
    return 0;
}

int32 UVItemDetailsViewModel::GetWeaponMaxCharge() const {
    return 0;
}

int32 UVItemDetailsViewModel::GetWeaponCharge() const {
    return 0;
}

int32 UVItemDetailsViewModel::GetSoulgemMaxCapacity() const {
    return 0;
}

FText UVItemDetailsViewModel::GetSoulgemLevel() const {
    return FText::GetEmpty();
}

int32 UVItemDetailsViewModel::GetSoulgemCapacity() const {
    return 0;
}

EOriginalInventoryMenuPotionType UVItemDetailsViewModel::GetPotionType() const {
    return EOriginalInventoryMenuPotionType::Potion;
}

FOriginalInventoryMenuItemSkillInformations UVItemDetailsViewModel::GetItemSkillInformations() const {
    return FOriginalInventoryMenuItemSkillInformations{};
}

bool UVItemDetailsViewModel::GetIsStoneUsable() const {
    return false;
}

bool UVItemDetailsViewModel::GetIsSoulgemUsable() const {
    return false;
}

bool UVItemDetailsViewModel::GetIsRepairHammerUsable() const {
    return false;
}

bool UVItemDetailsViewModel::GetIsLightArmor() const {
    return false;
}

bool UVItemDetailsViewModel::GetIsAlchemyToolUsable() const {
    return false;
}

FText UVItemDetailsViewModel::GetHoveredWeaponDescriptionText(const FText& DescriptionTextFormat, const TMap<FGameplayTag, FText>& WeaponSizeToTextMap, const TMap<FGameplayTag, FText>& WeaponTypeToTextMap, const TMap<FGameplayTag, FText>& WeaponSkillToTextMap) const {
    return FText::GetEmpty();
}

UTESForm* UVItemDetailsViewModel::GetHoveredObjectTESForm() const {
    return NULL;
}

EOriginalInventoryMenuArmorClothPart UVItemDetailsViewModel::GetClothPart() const {
    return EOriginalInventoryMenuArmorClothPart::Head;
}

EOriginalInventoryMenuBookType UVItemDetailsViewModel::GetBookType() const {
    return EOriginalInventoryMenuBookType::Book;
}

EOriginalInventoryMenuArmorClothPart UVItemDetailsViewModel::GetArmorPart() const {
    return EOriginalInventoryMenuArmorClothPart::Head;
}


