#pragma once
#include "CoreMinimal.h"
#include "EAllFormFlags.generated.h"

UENUM()
enum class EAllFormFlags {
    Master = 1,
    Altered,
    Transfer = 4,
    Init = 8,
    NoCollision = 16,
    Delete = 32,
    ActorHasSpokenTo = 64,
    BorderRegion = ActorHasSpokenTo,
    FireOff = 128,
    Droppped = 256,
    CastShadows = 512,
    Quest = 1024,
    Persistent = Quest,
    Disabled = 2048,
    Ignore = 4096,
    MenuNotify = Ignore,
    Empty = 8192,
    Destroyed = Empty,
    HasResults = Empty,
    Temporary = 16384,
    PartialData = Temporary,
    Distant = 32768,
    HavokDeath = 65536,
    NeedChangeProcess = 131072,
    Dangerous = NeedChangeProcess,
    OffLimit = NeedChangeProcess,
    Compressed = 262144,
    Targeted = Compressed,
    CantWait = 524288,
    StartsDead = CantWait,
    Temp3D = CantWait,
    IgnoreFriendHits = 1048576,
    CenterOnCreation = IgnoreFriendHits,
    StillLoading = 2097152,
    NewPCDrop = 4194304,
};

