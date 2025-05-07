#include "BethesdaNetUIUserManagementFlow.h"

ABethesdaNetUIUserManagementFlow::ABethesdaNetUIUserManagementFlow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AgreementsUiClass = NULL;
    this->ManagementUiClass = NULL;
    this->ErrorUiClass = NULL;
    this->SpinnerUiClass = NULL;
    this->AgreementsUi = NULL;
    this->ManagementUi = NULL;
    this->ErrorUi = NULL;
    this->SpinnerUi = NULL;
    this->LocalUserNum = 0;
    this->ZOrder = 0;
}

void ABethesdaNetUIUserManagementFlow::OnScreenErrorCancelButtonClicked() {
}

void ABethesdaNetUIUserManagementFlow::OnScreenErrorBackButtonClicked() {
}

void ABethesdaNetUIUserManagementFlow::OnScreenAgreementsContinueButtonClicked() {
}

void ABethesdaNetUIUserManagementFlow::OnScreenAgreementsCancelButtonClicked() {
}

void ABethesdaNetUIUserManagementFlow::OnManagementScreenViewAgreementsButtonClicked() {
}

void ABethesdaNetUIUserManagementFlow::OnManagementScreenHelpButtonClicked() {
}

void ABethesdaNetUIUserManagementFlow::OnManagementScreenBackButtonClicked() {
}

void ABethesdaNetUIUserManagementFlow::OnManagementScreenAccountManageButtonClicked() {
}

void ABethesdaNetUIUserManagementFlow::BeginManagementFlowLatentCallback(int32 InLocalUserNum, EBNetUIManagementFlow InResult, const FText& InError) {
}

void ABethesdaNetUIUserManagementFlow::BeginManagementFlow(int32 InLocalUserNum, FLatentActionInfo InLatentInfo, EBNetUIManagementFlow& OutResult, FText& OutError, int32 InZOrder) {
}


