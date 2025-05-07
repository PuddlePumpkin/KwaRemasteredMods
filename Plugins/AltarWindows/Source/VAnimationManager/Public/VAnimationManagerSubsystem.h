#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VAnimationManagerSubsystem.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class VANIMATIONMANAGER_API UVAnimationManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UVAnimationManagerSubsystem();

};

