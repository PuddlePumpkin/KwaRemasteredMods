#pragma once
#include "CoreMinimal.h"
#include "EVFadeTransitionType.h"
#include "FadeOutExtraDurationBeginDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFadeOutExtraDurationBegin, EVFadeTransitionType, InType, float, InDuration);

