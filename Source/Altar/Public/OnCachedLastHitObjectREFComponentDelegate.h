#pragma once
#include "CoreMinimal.h"
#include "OnCachedLastHitObjectREFComponentDelegate.generated.h"

class UVTESObjectRefComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCachedLastHitObjectREFComponent, UVTESObjectRefComponent*, OldRef, UVTESObjectRefComponent*, NewRef);

