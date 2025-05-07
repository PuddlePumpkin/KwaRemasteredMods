#pragma once
#include "CoreMinimal.h"
#include "BethesdaNetUIScreenBase.h"
#include "OnBnetButtonClickedDelegate.h"
#include "BethesdaNetUIScreenHelp.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ONLINESUBSYSTEMBETHESDANET_API UBethesdaNetUIScreenHelp : public UBethesdaNetUIScreenBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnAccountHelpButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnGeneralHelpButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnBackButtonClicked;
    
    UBethesdaNetUIScreenHelp();

protected:
    UFUNCTION(BlueprintCallable)
    void GeneralHelpButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void BackButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void AccountHelpButtonClicked();
    
};

