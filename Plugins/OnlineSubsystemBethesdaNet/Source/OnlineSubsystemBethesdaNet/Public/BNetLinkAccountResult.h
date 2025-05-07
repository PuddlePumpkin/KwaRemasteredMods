#pragma once
#include "CoreMinimal.h"
#include "BNetLinkAccountResult.generated.h"

UENUM(BlueprintType)
enum class BNetLinkAccountResult : uint8 {
    AccountLinked,
    InvalidUserNum,
    AlreadyLinked,
    ExternalAuthIssue,
    ConnectionIssue,
    FirstPartyLoggedOut,
    GenericError,
};

