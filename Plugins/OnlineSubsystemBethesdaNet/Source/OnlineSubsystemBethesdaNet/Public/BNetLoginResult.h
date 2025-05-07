#pragma once
#include "CoreMinimal.h"
#include "BNetLoginResult.generated.h"

UENUM(BlueprintType)
enum class BNetLoginResult : uint8 {
    LoginSuccessful,
    LoginSuccessfulHasEula,
    InvalidUserNum,
    InvalidCredentials,
    UnknownAccount,
    ConnectionIssue,
    FirstPartyLoggedOut,
    InvalidEmail,
    ExternalAuthIssue,
    Banned,
    GenericError,
};

