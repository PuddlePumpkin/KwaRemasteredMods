#include "VModernOnboardingMenu.h"

UVModernOnboardingMenu::UVModernOnboardingMenu() {
    this->bDoesCleanOnEnd = false;
    this->Panel = NULL;
    this->Background = NULL;
}

bool UVModernOnboardingMenu::Skip() {
    return false;
}





void UVModernOnboardingMenu::OnAnimationEnded(TScriptInterface<IVOnboardingPageInterface> Caller) {
}

bool UVModernOnboardingMenu::IsOnboardingFinished() const {
    return false;
}

TScriptInterface<IVOnboardingPageInterface> UVModernOnboardingMenu::GetPage(int32 Index) const {
    return NULL;
}

TScriptInterface<IVOnboardingPageInterface> UVModernOnboardingMenu::GetOffsetedNextPage(int32 Offset) const {
    return NULL;
}

int32 UVModernOnboardingMenu::GetNextUnskipableIndex(int32 StartIndex) const {
    return 0;
}

TScriptInterface<IVOnboardingPageInterface> UVModernOnboardingMenu::GetCurrentPage() const {
    return NULL;
}

void UVModernOnboardingMenu::CleanOnboarding() {
}

bool UVModernOnboardingMenu::Back() {
    return false;
}


