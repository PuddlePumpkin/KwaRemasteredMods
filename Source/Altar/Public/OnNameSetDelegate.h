#pragma once
#include "CoreMinimal.h"
#include "PlayerNamePair.h"
#include "OnNameSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNameSet, const FPlayerNamePair&, NamePair);

