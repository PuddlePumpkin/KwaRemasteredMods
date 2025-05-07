#include "NiTexturingProperty.h"

UNiTexturingProperty::UNiTexturingProperty() {
    this->Flagsushort = 0;
    this->ApplyModeFlag = ApplyMode::APPLY_REPLACE;
    this->TextureCount = 0;
    this->HasBaseTexture = false;
    this->BaseTexture = NULL;
    this->HasDarkTexture = false;
    this->DarkTexture = NULL;
    this->HasDetailTexture = false;
    this->DetailTexture = NULL;
    this->HasGlossTexture = false;
    this->GlossTexture = NULL;
    this->HasGlowTexture = false;
    this->GlowTexture = NULL;
    this->HasBumpMapTexture = false;
    this->BumpMapTexture = NULL;
    this->BumpMapLumaScale = 0.00f;
    this->BumpMapLumaOffset = 0.00f;
    this->BumpMapMatrix = NULL;
    this->HasNormalTexture = false;
    this->NormalTexture = NULL;
    this->HasParallaxTexture = false;
    this->ParallaxTexture = NULL;
    this->ParallaxOffset = 0.00f;
    this->HasDecal0Texture = false;
    this->Decal0Texture = NULL;
    this->HasDecal1Texture = false;
    this->Decal1Texture = NULL;
    this->HasDecal2Texture = false;
    this->Decal2Texture = NULL;
    this->HasDecal3Texture = false;
    this->Decal3Texture = NULL;
    this->NumShaderTextures = 0;
}


