#include "TESAmmo.h"

UTESAmmo::UTESAmmo() {
    this->AmmoMass = 0.00f;
}

TSoftObjectPtr<UStaticMesh> UTESAmmo::GetQuiverStaticMesh() {
    return NULL;
}

TSoftObjectPtr<UStaticMesh> UTESAmmo::GetProjectileStaticMesh() {
    return NULL;
}


