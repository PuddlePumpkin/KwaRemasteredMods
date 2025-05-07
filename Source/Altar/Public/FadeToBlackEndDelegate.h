#pragma once
#include "CoreMinimal.h"
#include "EVFadeTransitionType.h"
#include "FadeToBlackEndDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFadeToBlackEnd, EVFadeTransitionType, InType);

