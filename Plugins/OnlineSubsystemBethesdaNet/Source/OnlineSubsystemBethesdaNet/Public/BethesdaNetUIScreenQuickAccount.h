#pragma once
#include "CoreMinimal.h"
#include "BethesdaNetUIScreenBase.h"
#include "OnBnetButtonClickedDelegate.h"
#include "OnBnetCreateButtonClickedDelegate.h"
#include "BethesdaNetUIScreenQuickAccount.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ONLINESUBSYSTEMBETHESDANET_API UBethesdaNetUIScreenQuickAccount : public UBethesdaNetUIScreenBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnViewAgreementsButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetCreateButtonClicked OnCreateAccountButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnCancelButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnLoginButtonClicked;
    
    UBethesdaNetUIScreenQuickAccount();

protected:
    UFUNCTION(BlueprintCallable)
    void ViewAgreementsButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowInvalidEmail();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFirstPartyEmail(const FString& InEmail);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoginButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void CreateAccountButtonClicked(const FText& InEmail);
    
    UFUNCTION(BlueprintCallable)
    void CancelButtonClicked();
    
};

