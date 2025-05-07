#include "TESEffectSetting.h"

UTESEffectSetting::UTESEffectSetting() {
    this->AssociatedItemID = 0;
    this->EffectShaderID = 0;
    this->EnchantEffectID = 0;
    this->CastingBlueprintClass = NULL;
    this->ProjectileBlueprintClass = NULL;
    this->AreaEffectBlueprintClass = NULL;
    this->HitEffectBlueprintClass = NULL;
    this->MaxDurationBeforeDestroyed = 60.00f;
    this->SocketNameForCastingAttachment = TEXT("magicNode_Socket");
    this->bHasUseFlag = false;
}

int64 UTESEffectSetting::GetEnchantEffectID() {
    return 0;
}

int64 UTESEffectSetting::GetEffectShaderID() {
    return 0;
}

int64 UTESEffectSetting::GetAssociatedItemID() {
    return 0;
}


