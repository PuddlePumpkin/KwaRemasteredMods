#include "MaterialData.h"

UMaterialData::UMaterialData() {
    this->HasShader = false;
    this->ShaderExtraData = 0;
    this->NumMaterials = 0;
    this->ActiveMaterial = 0;
    this->MaterialNeedsUpdate = false;
}


