#pragma once
#include "CoreMinimal.h"
#include "EOblivionPackageFlags.generated.h"

UENUM()
enum class EOblivionPackageFlags {
    Services = 1,
    MustReachLocation,
    MustComplete = 4,
    LockStart = 8,
    LockEnd = 16,
    LockAtLoc = 32,
    UnlockStart = 64,
    UnlockEnd = 128,
    UnlockAtLoc = 256,
    PCContinue = 512,
    OncePerDay = 1024,
    IsCreated = 2048,
    SkipFallout = 4096,
    AlwaysRun = 8192,
    Script = 16384,
    NeverRun = 32768,
    Waiting = 65536,
    AlwaysSneak = 131072,
    AllowSwim = 262144,
    AllowFalls = 524288,
    NoArmor = 1048576,
    NoWeapon = 2097152,
    Defensive = 4194304,
    Horse = 8388608,
    NoIdles = 16777216,
};

