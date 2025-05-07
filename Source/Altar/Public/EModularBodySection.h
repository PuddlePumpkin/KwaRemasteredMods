#pragma once
#include "CoreMinimal.h"
#include "EModularBodySection.generated.h"

UENUM()
enum class EModularBodySection: int64 {
    Feet = 16777216,
    Calf = 33554432,
    Knees = 67108864,
    Thigh = 134217728,
    BustRear = 268435456,
    Stomach = 536870912,
    ChestCenter = 1073741824,
    ChestSide = 2147483648,
    BackTop = 65536,
    Shoulder = 131072,
    Biceps = 262144,
    Forearms = 524288,
    Heels = 1048576,
    Hands = 2097152,
    Bra = 4194304,
    LoinCloth = 8388608,
    Tail = 256,
    Collar = 512,
    Neck = 1024,
    Head = 2048,
    CollarCenter = 4096,
    EarsTip = 8192,
    Ankle = 16384,
    FeetBase = 32768,
};

