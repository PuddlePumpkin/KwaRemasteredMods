#pragma once
#include "CoreMinimal.h"
#include "StencilTestFunc.generated.h"

UENUM()
enum class StencilTestFunc : uint32 {
    TEST_NEVER,
    TEST_LESS,
    TEST_EQUAL,
    TEST_LESS_EQUAL,
    TEST_GREATER,
    TEST_NOT_EQUAL,
    TEST_GREATER_EQUAL,
    TEST_ALWAYS,
};

