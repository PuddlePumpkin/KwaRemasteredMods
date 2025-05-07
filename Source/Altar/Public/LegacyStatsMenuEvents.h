#pragma once
#include "CoreMinimal.h"
#include "LegacyStatsMenuEvents.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLegacyStatsMenuFocusEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLegacyStatsMenuUnfocusEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLegacyStatsMenuHoverEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLegacyStatsMenuNoHoverEvent);
