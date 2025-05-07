#pragma once
#include "CoreMinimal.h"
#include "BethesdaNetUIScreenBase.h"
#include "OnBnetButtonClickedDelegate.h"
#include "BethesdaNetUIScreenSuccess.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ONLINESUBSYSTEMBETHESDANET_API UBethesdaNetUIScreenSuccess : public UBethesdaNetUIScreenBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBnetButtonClicked OnOkButtonClicked;
    
    UBethesdaNetUIScreenSuccess();

protected:
    UFUNCTION(BlueprintCallable)
    void OkButtonClicked();
    
};

