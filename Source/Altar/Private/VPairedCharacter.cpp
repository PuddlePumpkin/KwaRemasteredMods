#include "VPairedCharacter.h"
#include "Components/ChildActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "MotionWarpingComponent.h"
#include "VCharacterAppearancePairingComponent.h"
#include "VCharacterBodyPairingComponent.h"
#include "VCharacterPhenotypeData.h"
#include "VDockingPairingComponent.h"
#include "VHumanoidHeadComponent.h"

AVPairedCharacter::AVPairedCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DockWarpTargetName = TEXT("Dock");
    this->Sex = ECharacterSex::MALE;
    this->VoiceType = EVVoiceType::LEGACY;
    this->bUseDefaultRaceAndSexPreset = true;
    this->PhenotypeData = CreateDefaultSubobject<UVCharacterPhenotypeData>(TEXT("Phenotype"));
    this->HumanoidHeadComponent = CreateDefaultSubobject<UVHumanoidHeadComponent>(TEXT("Head Component"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->HeadwearChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("Headwear"));
    this->UpperBodyChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("Upper Body"));
    this->LowerBodyChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("Lower Body"));
    this->HandsChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("Hands"));
    this->FeetChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("Feet"));
    this->AmuletChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("Amulet"));
    this->RightRingChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("Right Ring"));
    this->LeftRingChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("Left Ring"));
    this->CharacterBodyPairingComponent = CreateDefaultSubobject<UVCharacterBodyPairingComponent>(TEXT("Character Body Pairing Component"));
    this->DockingPairingComponent = CreateDefaultSubobject<UVDockingPairingComponent>(TEXT("Docking Pairing Component"));
    this->HumanoidMotionWarpingComponent = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("Motion Warping Component"));
    this->CharacterAppearancePairingComponent = CreateDefaultSubobject<UVCharacterAppearancePairingComponent>(TEXT("Appearance"));
    this->EmotionBlendValueMultiplier = 0.50f;
    this->bHasUndockingQueued = false;
    this->AmuletChildActorComponent->SetupAttachment(RootComponent);
    this->FeetChildActorComponent->SetupAttachment(RootComponent);
    this->HandsChildActorComponent->SetupAttachment(RootComponent);
    this->HeadwearChildActorComponent->SetupAttachment(HumanoidHeadComponent);
    this->HumanoidHeadComponent->SetupAttachment(RootComponent);
    this->LeftRingChildActorComponent->SetupAttachment(RootComponent);
    this->LowerBodyChildActorComponent->SetupAttachment(RootComponent);
    this->RightRingChildActorComponent->SetupAttachment(RootComponent);
    this->UpperBodyChildActorComponent->SetupAttachment(RootComponent);
}

void AVPairedCharacter::WarpToDockingPosition() {
}

void AVPairedCharacter::WaitForRefreshAppearanceToComplete(float Timeout) {
}

void AVPairedCharacter::UpdateRaceAudioSwitch() {
}

void AVPairedCharacter::UpdateGenderAudioSwitch() {
}

void AVPairedCharacter::SnapToStandingPosition(bool bUpdatePairedDockingState, bool bSnapToMarker) {
}

void AVPairedCharacter::SetVoiceType(const EVVoiceType NewVoiceType) {
}

void AVPairedCharacter::SetSex(const ECharacterSex NewSex) {
}

void AVPairedCharacter::SetRace(const UTESRace* NewRace) {
}

void AVPairedCharacter::SetBodySectionsOnMesh(USkeletalMeshComponent* Components) {
}

void AVPairedCharacter::RefreshAppearanceAsync(EVCharacterRefreshSelector Selector) {
}

void AVPairedCharacter::RefreshAppearance(EVCharacterRefreshSelector Selector) {
}

void AVPairedCharacter::ProcessPendingUndockingRequest() {
}

void AVPairedCharacter::OnWeaponDrawnStateChanged(bool bIsWeaponDrawn) {
}

void AVPairedCharacter::OnStartDockingToHorse() const {
}

void AVPairedCharacter::OnRaceOrSexChanged() {
}

void AVPairedCharacter::OnFacialAnimationMontageDone(UAnimMontage* Montage, bool bInterrupted) {
}

void AVPairedCharacter::OnBodyPartPropertiesChanged(EBipedModularBodySlot Slot, const FVCharacterBodyPartProperties& Properties) {
}

bool AVPairedCharacter::IsInDockingProcess() const {
    return false;
}

bool AVPairedCharacter::IsDocked() const {
    return false;
}

bool AVPairedCharacter::InitializeAppearanceFromForm() {
    return false;
}

EVVoiceType AVPairedCharacter::GetVoiceType() const {
    return EVVoiceType::LEGACY;
}

AActor* AVPairedCharacter::GetUsedDockActor() const {
    return NULL;
}

ECharacterSex AVPairedCharacter::GetSex() const {
    return ECharacterSex::MALE;
}

UTESRace* AVPairedCharacter::GetRace() const {
    return NULL;
}

TMap<EBipedModularBodySlot, UTESForm*> AVPairedCharacter::GetInitialEquipmentMap() const {
    return TMap<EBipedModularBodySlot, UTESForm*>();
}

AVPairedCreature* AVPairedCharacter::GetHorse() const {
    return NULL;
}

UChildActorComponent* AVPairedCharacter::GetChildActorFromSlot(EBipedModularBodySlot Slot) const {
    return NULL;
}

TMap<FName, float> AVPairedCharacter::GetBonesScale(const TArray<FName>& Names) const {
    return TMap<FName, float>();
}

float AVPairedCharacter::GetBoneScale(const FName& Name) const {
    return 0.0f;
}

EVBloodColor AVPairedCharacter::GetBloodColor() const {
    return EVBloodColor::Red;
}

void AVPairedCharacter::FinishDockingToRequestedDockActor(bool bSnapTransform) {
}

void AVPairedCharacter::ClearAllDockingTags() {
}

void AVPairedCharacter::CallTextureEffectBroadcastDelegate() {
}

void AVPairedCharacter::ApplyBodyPartPropertiesToChildActor(EBipedModularBodySlot Slot, const FVCharacterBodyPartProperties& Properties) {
}


