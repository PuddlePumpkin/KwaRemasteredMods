#pragma once
#include "CoreMinimal.h"
#include "EBNetUIManagementFlow.generated.h"

UENUM(BlueprintType)
enum class EBNetUIManagementFlow : uint8 {
    Success,
    InvalidUserNum,
    OnlineSubsystemNotFound,
    EmptyEmailAddress,
    Cancelled,
    GenericError,
};

