#include "BethesdaNetUIScreenBase.h"

UBethesdaNetUIScreenBase::UBethesdaNetUIScreenBase() : UUserWidget(FObjectInitializer::Get()) {
    this->ScreenStyleAsset = NULL;
}


void UBethesdaNetUIScreenBase::OnScreenLoseFocus_Implementation() {
}

void UBethesdaNetUIScreenBase::OnScreenGainFocus_Implementation() {
}

FEventReply UBethesdaNetUIScreenBase::OnScreenConfirm_Implementation(FGeometry MyGeometry, const FKeyEvent& InKeyEvent) {
    return FEventReply{};
}

FEventReply UBethesdaNetUIScreenBase::OnScreenCancel_Implementation(FGeometry MyGeometry, const FKeyEvent& InKeyEvent) {
    return FEventReply{};
}




