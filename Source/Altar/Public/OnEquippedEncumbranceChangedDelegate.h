#pragma once
#include "CoreMinimal.h"
#include "OnEquippedEncumbranceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquippedEncumbranceChanged, float, PreviousEquippedEncumbrance, float, NewEquippedEncumbrance);

