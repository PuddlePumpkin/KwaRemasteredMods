#include "VSpellCastMultiAnimInstance.h"

UVSpellCastMultiAnimInstance::UVSpellCastMultiAnimInstance() {
    this->CastTargetLeftAnim = NULL;
    this->CastTargetRightAnim = NULL;
    this->CastSelfLeftAnim = NULL;
    this->CastSelfRightAnim = NULL;
    this->CastTouchLeftAnim = NULL;
    this->CastTouchRightAnim = NULL;
}

void UVSpellCastMultiAnimInstance::OnCastTouchRightEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVSpellCastMultiAnimInstance::OnCastTouchLeftEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVSpellCastMultiAnimInstance::OnCastTargetLeftEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVSpellCastMultiAnimInstance::OnCastTargeRightEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVSpellCastMultiAnimInstance::OnCastSelfRightEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVSpellCastMultiAnimInstance::OnCastSelfLeftEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}


