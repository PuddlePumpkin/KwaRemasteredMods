#pragma once
#include "CoreMinimal.h"
#include "BNetEulaStepResult.generated.h"

UENUM(BlueprintType)
enum class BNetEulaStepResult : uint8 {
    EulaComplete,
    EulaCompleteNeedsLink,
    EulaCompleteNeedsLogin,
    EulaHasNext,
    InvalidUserNum,
    NotSignedIn,
    DownloadFailed,
    ConnectionIssue,
    FirstPartyLoggedOut,
    GenericError,
};

