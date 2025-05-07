#pragma once
#include "CoreMinimal.h"
#include "OnUserInputTextSaveDataLoadedDelegate.generated.h"

class UUserInputTextSaveData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserInputTextSaveDataLoaded, UUserInputTextSaveData*, SaveData);

