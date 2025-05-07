#include "VModernOnboardingPage.h"

UVModernOnboardingPage::UVModernOnboardingPage() {
    this->OwningStateMachine = NULL;
}

bool UVModernOnboardingPage::IsOnPlaystation() const {
    return false;
}

bool UVModernOnboardingPage::IsOnPC() const {
    return false;
}

void UVModernOnboardingPage::CallExitAnimationDelegate() {
}

void UVModernOnboardingPage::CallEnterAnimationDelegate() {
}


