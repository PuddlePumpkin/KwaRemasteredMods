#pragma once
#include "CoreMinimal.h"
#include "EOblivionAnimSection.h"
#include "OnAnimationSkipDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimationSkipDelegate, EOblivionAnimSection, Section);

