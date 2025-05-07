#include "VDressingSwitcher.h"
#include "Components/SceneComponent.h"
#include "VDynamicNavAreaRebuilderComponent.h"

AVDressingSwitcher::AVDressingSwitcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene Component"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->NavRebuilderComponent = CreateDefaultSubobject<UVDynamicNavAreaRebuilderComponent>(TEXT("Nav Rebuilder Component"));
    this->bInvertedVisibility = false;
    this->bIsDressingHidden = true;
}

void AVDressingSwitcher::RefreshVisibilityFromTarget() {
}

void AVDressingSwitcher::OnTargetDisabled(bool bShouldBeDisabled) {
}


