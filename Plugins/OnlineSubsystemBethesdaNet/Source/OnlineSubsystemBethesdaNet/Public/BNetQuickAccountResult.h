#pragma once
#include "CoreMinimal.h"
#include "BNetQuickAccountResult.generated.h"

UENUM(BlueprintType)
enum class BNetQuickAccountResult : uint8 {
    AccountCreated,
    AccountCreatedNeedsEula,
    InvalidUserNum,
    EmailAlreadyTaken,
    InvalidEmail,
    ConnectionIssue,
    FirstPartyLoggedOut,
    EulaCancelled,
    GenericError,
};

