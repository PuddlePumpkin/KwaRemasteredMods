#pragma once
#include "CoreMinimal.h"
#include "OnSaveDataLoadedDelegate.generated.h"

class UVBaseUIGameSaveData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveDataLoaded, UVBaseUIGameSaveData*, SaveData);

