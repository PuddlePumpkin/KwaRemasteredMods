#pragma once
#include "CoreMinimal.h"
#include "hkResponseType.generated.h"

UENUM()
enum class hkResponseType : int8 {
    RESPONSE_INVALID,
    RESPONSE_SIMPLE_CONTACT,
    RESPONSE_REPORTING,
    RESPONSE_NONE,
};

