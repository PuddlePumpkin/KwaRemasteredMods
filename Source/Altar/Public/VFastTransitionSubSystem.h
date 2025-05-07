#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VFastTransitionSubSystem.generated.h"

class UVFastTransition;

UCLASS(Blueprintable)
class ALTAR_API UVFastTransitionSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVFastTransition* FastTransition;
    
    UVFastTransitionSubSystem();

};

