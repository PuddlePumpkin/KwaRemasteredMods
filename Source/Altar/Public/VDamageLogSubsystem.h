#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VDamageLogSubsystem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVDamageLogSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UVDamageLogSubsystem();

};

