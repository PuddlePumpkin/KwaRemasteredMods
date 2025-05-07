#pragma once
#include "CoreMinimal.h"
#include "BethesdaNetUIScreenBase.h"
#include "OnBnetButtonClickedDelegate.h"
#include "OnBnetLoginButtonClickedDelegate.h"
#include "BethesdaNetUIScreenLogin.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ONLINESUBSYSTEMBETHESDANET_API UBethesdaNetUIScreenLogin : public UBethesdaNetUIScreenBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnViewAgreementsButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetLoginButtonClicked OnLoginButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnCancelButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnAccountHelpButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnCreateAccountButtonClicked;
    
    UBethesdaNetUIScreenLogin();

protected:
    UFUNCTION(BlueprintCallable)
    void ViewAgreementsButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetError(const FText& InError);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoginButtonClicked(const FText& UserName, const FText& Password);
    
    UFUNCTION(BlueprintCallable)
    void CreateAccountButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void CancelButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void AccountHelpButtonClicked();
    
};

