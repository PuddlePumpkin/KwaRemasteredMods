#pragma once
#include "CoreMinimal.h"
#include "EZBufferTestFunction.generated.h"

UENUM()
enum class EZBufferTestFunction : uint32 {
    TEST_ALWAYS,
    TEST_LESS,
    TEST_EQUAL,
    TEST_LESSEQUAL,
    TEST_GREATER,
    TEST_NOTEQUAL,
    TEST_GREATEREQUAL,
    TEST_NEVER,
    TEST_MAX_MODES,
};

