#pragma once
#include "CoreMinimal.h"
#include "BethesdaNetUIScreenBase.h"
#include "OnBnetButtonClickedDelegate.h"
#include "BethesdaNetUIScreenError.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ONLINESUBSYSTEMBETHESDANET_API UBethesdaNetUIScreenError : public UBethesdaNetUIScreenBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnBackButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnCancelButtonClicked;
    
    UBethesdaNetUIScreenError();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetError(const FText& InTitleText, const FText& InMessageText, const FString& InErrorValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConnectionError(const FText& InTitleText, const FText& InMessageText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void BackButtonClicked();
    
};

