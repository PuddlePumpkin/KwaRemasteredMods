#pragma once
#include "CoreMinimal.h"
#include "BethesdaNetUIScreenBase.h"
#include "OnBnetButtonClickedDelegate.h"
#include "BethesdaNetUIScreenManagement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ONLINESUBSYSTEMBETHESDANET_API UBethesdaNetUIScreenManagement : public UBethesdaNetUIScreenBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnAccountManageButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnHelpButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnViewAgreementsButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnBackButtonClicked;
    
    UBethesdaNetUIScreenManagement();

protected:
    UFUNCTION(BlueprintCallable)
    void ViewAgreementsButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUserEmailAddress(const FText& InEmailAddress);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HelpButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void BackButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void AccountManageButtonClicked();
    
};

