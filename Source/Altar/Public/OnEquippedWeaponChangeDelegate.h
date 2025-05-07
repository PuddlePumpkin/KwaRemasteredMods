#pragma once
#include "CoreMinimal.h"
#include "OnEquippedWeaponChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnEquippedWeaponChange, int32, WeaponType, bool, IsShieldEquipped, bool, IsTorchEquipped);

