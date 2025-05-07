#include "VPhenotypeCustomizationSession.h"

UVPhenotypeCustomizationSession::UVPhenotypeCustomizationSession() {
    this->LinkedCharacter = NULL;
    this->Filter = EVCharacterPhenotypeDataFilter::None;
}

void UVPhenotypeCustomizationSession::StartFromScratch(UWorld* InWorld) {
}

void UVPhenotypeCustomizationSession::StartFromCharacter(AVPairedCharacter* Character, bool DestroyCharacterOnSessionEnd) {
}

void UVPhenotypeCustomizationSession::SetSkinParameter(FName ParameterName, float Value, bool bShouldRefreshCharacter) {
}

void UVPhenotypeCustomizationSession::SetSkinColorParameter(FName ParameterName, FColor Value, bool bShouldRefreshCharacter) {
}

void UVPhenotypeCustomizationSession::SetSex(ECharacterSex Sex, bool bShouldRefreshCharacter) {
}

void UVPhenotypeCustomizationSession::SetSenescenceValue(int32 NewValue, bool bShouldRefreshCharacter) {
}

void UVPhenotypeCustomizationSession::SetRace(UTESRace* NewRace, bool bShouldRefreshCharacter) {
}

void UVPhenotypeCustomizationSession::SetHairPiece(EVFacialHairType HairType, UVCharacterHairPieceBase* HairPiece, int32 CustomisationIndex, bool bShouldRefreshCharacter) {
}

void UVPhenotypeCustomizationSession::SetFaceSkinMaterial(FName MaterialSlotName, UMaterialInterface* Material, bool bShouldRefreshCharacter) {
}

void UVPhenotypeCustomizationSession::SetFaceMorphAxisValue(FName Name, float Value, bool bShouldRefreshCharacter) {
}

void UVPhenotypeCustomizationSession::SetFaceBaseMesh(USkeletalMesh* FaceBaseMesh, bool bShouldRefreshCharacter) {
}

void UVPhenotypeCustomizationSession::SetEyeMaterial(UMaterialInterface* Material, int32 CustomisationIndex, bool bShouldRefreshCharacter) {
}

void UVPhenotypeCustomizationSession::ResetCharacterToPreset(const UVCharacterPhenotypePreset* Preset) {
}

void UVPhenotypeCustomizationSession::RefreshCharacter() {
}

void UVPhenotypeCustomizationSession::EndSession() {
}


