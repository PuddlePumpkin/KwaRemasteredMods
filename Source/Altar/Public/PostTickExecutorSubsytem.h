#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PostTickExecutorSubsytem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UPostTickExecutorSubsytem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPostTickExecutorSubsytem();

};

