#pragma once
#include "CoreMinimal.h"
#include "AltarMediaPlayerOnVideoOpennedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAltarMediaPlayerOnVideoOpenned, const FString&, OpenedUrl);

