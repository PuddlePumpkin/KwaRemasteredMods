#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "BethesdaNetUIQuickAccountFlowCompleteDelegate.h"
#include "EBNetUIQuickAccountFlow.h"
#include "Templates/SubclassOf.h"
#include "BethesdaNetUIQuickAccountFlow.generated.h"

class UBethesdaNetUIScreenAccountExists;
class UBethesdaNetUIScreenAgreements;
class UBethesdaNetUIScreenError;
class UBethesdaNetUIScreenHelp;
class UBethesdaNetUIScreenLogin;
class UBethesdaNetUIScreenManagement;
class UBethesdaNetUIScreenQuickAccount;
class UBethesdaNetUIScreenSpinner;
class UBethesdaNetUIScreenSuccess;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMBETHESDANET_API ABethesdaNetUIQuickAccountFlow : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBethesdaNetUIQuickAccountFlowComplete OnAccountFlowComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenAccountExists> AccountExistsUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenAgreements> AgreementsUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenError> ErrorUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenHelp> HelpUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenLogin> LoginUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenManagement> ManagementUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenQuickAccount> QuickAccountUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenSpinner> SpinnerUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenSuccess> SuccessUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenAccountExists* AccountExistsUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenAgreements* AgreementsUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenError* ErrorUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenHelp* HelpUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenLogin* LoginUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenManagement* ManagementUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenQuickAccount* QuickAccountUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenSpinner* SpinnerUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenSuccess* SuccessUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalUserNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
public:
    ABethesdaNetUIQuickAccountFlow(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSuccessScreenOkButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnScreenExistsLoginButtonClicked(const FText& UserName, const FText& Password);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenExistsCancelButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnScreenExistsAgreementsButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnScreenExistsAccountHelpButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnScreenErrorCancelButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnScreenErrorBackButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnScreenAgreementsContinueButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnScreenAgreementsCancelButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnQuickAccountScreenViewAgreementsButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnQuickAccountScreenLoginButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnQuickAccountScreenCreateAccountButtonClicked(const FText& InEmail);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickAccountScreenCancelButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnManagementScreenViewAgreementsButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnManagementScreenHelpButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnManagementScreenBackButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnManagementScreenAccountManageButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLoginScreenViewAgreementsButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLoginScreenOnCreateAccountButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLoginScreenOnCancelButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLoginScreenOnAccountHelpButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLoginScreenLoginButtonClicked(const FText& UserName, const FText& Password);
    
    UFUNCTION(BlueprintCallable)
    void OnHelpScreenGeneralHelpButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnHelpScreenBackButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnHelpScreenAccountHelpButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void BeginAccountFlowLatentCallback(int32 InLocalUserNum, EBNetUIQuickAccountFlow InResult, const FText& InError);
    
public:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo"))
    void BeginAccountFlow(int32 InLocalUserNum, FLatentActionInfo InLatentInfo, EBNetUIQuickAccountFlow& OutResult, FText& OutError, int32 InZOrder);
    
};

