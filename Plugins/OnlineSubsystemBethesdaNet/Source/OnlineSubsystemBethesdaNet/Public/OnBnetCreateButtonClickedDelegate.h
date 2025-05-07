#pragma once
#include "CoreMinimal.h"
#include "OnBnetCreateButtonClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBnetCreateButtonClicked, const FText&, Email);

