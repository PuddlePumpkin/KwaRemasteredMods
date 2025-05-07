#include "BethesdaNetUIQuickAccountFlow.h"

ABethesdaNetUIQuickAccountFlow::ABethesdaNetUIQuickAccountFlow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AccountExistsUiClass = NULL;
    this->AgreementsUiClass = NULL;
    this->ErrorUiClass = NULL;
    this->HelpUiClass = NULL;
    this->LoginUiClass = NULL;
    this->ManagementUiClass = NULL;
    this->QuickAccountUiClass = NULL;
    this->SpinnerUiClass = NULL;
    this->SuccessUiClass = NULL;
    this->AccountExistsUi = NULL;
    this->AgreementsUi = NULL;
    this->ErrorUi = NULL;
    this->HelpUi = NULL;
    this->LoginUi = NULL;
    this->ManagementUi = NULL;
    this->QuickAccountUi = NULL;
    this->SpinnerUi = NULL;
    this->SuccessUi = NULL;
    this->LocalUserNum = 0;
    this->ZOrder = 0;
}

void ABethesdaNetUIQuickAccountFlow::OnSuccessScreenOkButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnScreenExistsLoginButtonClicked(const FText& UserName, const FText& Password) {
}

void ABethesdaNetUIQuickAccountFlow::OnScreenExistsCancelButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnScreenExistsAgreementsButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnScreenExistsAccountHelpButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnScreenErrorCancelButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnScreenErrorBackButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnScreenAgreementsContinueButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnScreenAgreementsCancelButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnQuickAccountScreenViewAgreementsButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnQuickAccountScreenLoginButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnQuickAccountScreenCreateAccountButtonClicked(const FText& InEmail) {
}

void ABethesdaNetUIQuickAccountFlow::OnQuickAccountScreenCancelButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnManagementScreenViewAgreementsButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnManagementScreenHelpButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnManagementScreenBackButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnManagementScreenAccountManageButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnLoginScreenViewAgreementsButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnLoginScreenOnCreateAccountButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnLoginScreenOnCancelButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnLoginScreenOnAccountHelpButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnLoginScreenLoginButtonClicked(const FText& UserName, const FText& Password) {
}

void ABethesdaNetUIQuickAccountFlow::OnHelpScreenGeneralHelpButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnHelpScreenBackButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::OnHelpScreenAccountHelpButtonClicked() {
}

void ABethesdaNetUIQuickAccountFlow::BeginAccountFlowLatentCallback(int32 InLocalUserNum, EBNetUIQuickAccountFlow InResult, const FText& InError) {
}

void ABethesdaNetUIQuickAccountFlow::BeginAccountFlow(int32 InLocalUserNum, FLatentActionInfo InLatentInfo, EBNetUIQuickAccountFlow& OutResult, FText& OutError, int32 InZOrder) {
}


