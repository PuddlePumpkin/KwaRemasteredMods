#pragma once
#include "CoreMinimal.h"
#include "EBNetUIQuickAccountFlow.generated.h"

UENUM(BlueprintType)
enum class EBNetUIQuickAccountFlow : uint8 {
    Success,
    AlreadyLoggedIn,
    PlayerCancelled,
    FirstPartyLoggedOut,
    InvalidUserNum,
    OnlineSubsystemNotFound,
};

