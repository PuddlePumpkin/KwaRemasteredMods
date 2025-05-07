#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "BethesdaNetUIUserManagementFlowCompleteDelegate.h"
#include "EBNetUIManagementFlow.h"
#include "Templates/SubclassOf.h"
#include "BethesdaNetUIUserManagementFlow.generated.h"

class UBethesdaNetUIScreenAgreements;
class UBethesdaNetUIScreenError;
class UBethesdaNetUIScreenManagement;
class UBethesdaNetUIScreenSpinner;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMBETHESDANET_API ABethesdaNetUIUserManagementFlow : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBethesdaNetUIUserManagementFlowComplete OnManagementFlowComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenAgreements> AgreementsUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenManagement> ManagementUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenError> ErrorUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBethesdaNetUIScreenSpinner> SpinnerUiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenAgreements* AgreementsUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenManagement* ManagementUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenError* ErrorUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBethesdaNetUIScreenSpinner* SpinnerUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalUserNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
public:
    ABethesdaNetUIUserManagementFlow(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnScreenErrorCancelButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnScreenErrorBackButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnScreenAgreementsContinueButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnScreenAgreementsCancelButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnManagementScreenViewAgreementsButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnManagementScreenHelpButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnManagementScreenBackButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnManagementScreenAccountManageButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void BeginManagementFlowLatentCallback(int32 InLocalUserNum, EBNetUIManagementFlow InResult, const FText& InError);
    
public:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo"))
    void BeginManagementFlow(int32 InLocalUserNum, FLatentActionInfo InLatentInfo, EBNetUIManagementFlow& OutResult, FText& OutError, int32 InZOrder);
    
};

