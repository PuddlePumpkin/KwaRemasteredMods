#pragma once
#include "CoreMinimal.h"
#include "BethesdaNetUIScreenBase.h"
#include "OnBnetButtonClickedDelegate.h"
#include "BethesdaNetUIScreenAgreements.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ONLINESUBSYSTEMBETHESDANET_API UBethesdaNetUIScreenAgreements : public UBethesdaNetUIScreenBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnContinueButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnCancelButtonClicked;
    
    UBethesdaNetUIScreenAgreements();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSpinner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLegalText(const FText& InLegalText, bool bInPrivacyPolicy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInUpdatedMode(bool bInUpdatedMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSpinning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInUpdatedMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSpinner();
    
private:
    UFUNCTION(BlueprintCallable)
    void ContinueButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void CancelButtonClicked();
    
};

