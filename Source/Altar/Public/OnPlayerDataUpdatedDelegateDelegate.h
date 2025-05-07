#pragma once
#include "CoreMinimal.h"
#include "LoadScreenPlayerData.h"
#include "OnPlayerDataUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDataUpdatedDelegate, const FLoadScreenPlayerData&, UpdatedPlayerData);

