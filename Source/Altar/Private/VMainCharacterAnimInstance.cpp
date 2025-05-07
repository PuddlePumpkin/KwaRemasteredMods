#include "VMainCharacterAnimInstance.h"
#include "Templates/SubclassOf.h"

UVMainCharacterAnimInstance::UVMainCharacterAnimInstance() {
    this->bCanSwim = true;
    this->bIsStaggered = false;
    this->bDodgingRequest = false;
    this->bCanExitBlock = false;
    this->bCanExitAttack = false;
    this->bAttackingRequest = false;
    this->bEquipUnequipRequest = false;
    this->bCastingRequest = false;
    this->bRecoilingRequest = false;
    this->bIsUsingFullBody = false;
    this->bIsWeaponDrawn = true;
    this->SpecialAndDynamicIdleAnimLayerClass = NULL;
    this->TorchAnimLayerClass = NULL;
    this->ShieldHandPoseAnimLayerClass = NULL;
    this->ConversationIdleAnimLayerClass = NULL;
    this->SpellCastAnimLayerClass = NULL;
    this->BlockAnimLayerClass = NULL;
    this->RecoilAnimLayerClass = NULL;
    this->StaggerAnimLayerClass = NULL;
    this->DodgeAnimLayerClass = NULL;
    this->GetUpAnimLayerClass = NULL;
    this->InAirAnimLayerClass = NULL;
    this->HorseRiderGroundAnimLayerClass = NULL;
    this->HorseRiderInAirAnimLayerClass = NULL;
    this->HorseRiderSwimAnimLayerClass = NULL;
    this->SpecialIdleUpperBodyBlendDepth = 0;
}

void UVMainCharacterAnimInstance::UpdateLocomotionLinkTableStateNode(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVMainCharacterAnimInstance::UpdateLocomotionLinkTable() {
}

UAnimInstance* UVMainCharacterAnimInstance::TryToLinkLayerAndUpdateLinkTable(const TSubclassOf<UAnimInstance> AnimLayerClass, FCharacterPropertyLinkTable& InPropertyLinkTable) {
    return NULL;
}

UAnimInstance* UVMainCharacterAnimInstance::TryToLinkLayer(const TSubclassOf<UAnimInstance> AnimLayerClass) {
    return NULL;
}

void UVMainCharacterAnimInstance::StateMachineActionRequest(UVPawnAnimatedAction* Action) {
}

void UVMainCharacterAnimInstance::SpecialIdleAnimationStart(UAnimSequenceBase* AnimationAsset) {
}

void UVMainCharacterAnimInstance::SetPropertyLinkTable(const TArray<FCharacterPropertyLinkTable>& InPropertyLinkTable) {
}

void UVMainCharacterAnimInstance::SetLocomotionLinkTable(const TArray<FCharacterPropertyLinkTable>& InLocomotionLinkTable) {
}

void UVMainCharacterAnimInstance::OnCombatStateFullyBlendedIn(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVMainCharacterAnimInstance::OnCombatStateExit(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVMainCharacterAnimInstance::OnCombatStateComplete(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVMainCharacterAnimInstance::LinkDynamicAnimLayersRequest() {
}

bool UVMainCharacterAnimInstance::IsWeaponDrawn() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsSwimming() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsStanding() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsStaggered() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsSneaking() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsRunning() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsResurrecting() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsRecoiling() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsOnHorse() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsMoving() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsInAir() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsGrabbing() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsDodging() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsBlocking() const {
    return false;
}

bool UVMainCharacterAnimInstance::IsAttacking() const {
    return false;
}

bool UVMainCharacterAnimInstance::HasAnyActionRequest(const FGameplayTagContainer& TagContainer) const {
    return false;
}

bool UVMainCharacterAnimInstance::HasActionRequestWithIndex(FGameplayTag ActionTag, int32 AnimIndex) const {
    return false;
}

bool UVMainCharacterAnimInstance::HasActionRequest(FGameplayTag ActionTag) const {
    return false;
}

void UVMainCharacterAnimInstance::DockingTransitionUpdated(bool bIsUndockingTransition) {
}


