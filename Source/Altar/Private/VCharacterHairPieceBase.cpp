#include "VCharacterHairPieceBase.h"

UVCharacterHairPieceBase::UVCharacterHairPieceBase() {
    this->bUseHairPhysics = false;
}

EVFacialHairType UVCharacterHairPieceBase::GetFacialHairType() const {
    return EVFacialHairType::Hair;
}

FCharacterHairPieceBaseConstructResult UVCharacterHairPieceBase::ConstructComponent(USkeletalMeshComponent* FaceMeshComponent, UVCharacterPhenotypeData* Phenotype) const {
    return FCharacterHairPieceBaseConstructResult{};
}


