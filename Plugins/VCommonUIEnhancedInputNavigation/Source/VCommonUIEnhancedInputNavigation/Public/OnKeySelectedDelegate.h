#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "OnKeySelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeySelected, FInputChord, NewInputChord);

