#pragma once
#include "CoreMinimal.h"
#include "AltarBinkMediaPlayerOnVideoOpennedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAltarBinkMediaPlayerOnVideoOpenned, const FString&, OpenedUrl);

