#pragma once
#include "CoreMinimal.h"
#include "ActorHiddenInGameChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActorHiddenInGameChangedSignature, UObject*, Object, bool, bHidden);
//UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionDelegate, AObj*, Object);
