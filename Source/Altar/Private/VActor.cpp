#include "VActor.h"

AVActor::AVActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemStackCount = -1;
}

void AVActor::OnResetAnimation_Implementation(const FString& AnimationName, float FramePosRatio, bool _bIsDestroyed) {
}

void AVActor::OnActivateAnimation_Implementation(const FString& AnimationName) {
}


AVPairedCharacter* AVActor::GetVariantReferenceCharacter() const {
    return NULL;
}


int32 AVActor::GetItemStackCount() const {
    return 0;
}

ECharacterSex AVActor::GetDroppedItemSexVariant() const {
    return ECharacterSex::MALE;
}

void AVActor::BindVariantUpdates_Implementation() {
}


