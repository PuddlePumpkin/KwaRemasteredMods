#pragma once
#include "CoreMinimal.h"
#include "OnBnetLoginButtonClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBnetLoginButtonClicked, const FText&, UserName, const FText&, Password);

