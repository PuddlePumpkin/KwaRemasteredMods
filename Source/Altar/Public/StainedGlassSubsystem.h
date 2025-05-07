#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "StainedGlassSubsystem.generated.h"

class AStainedGlassCapturer;

UCLASS(Blueprintable)
class ALTAR_API UStainedGlassSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStainedGlassCapturer*> CapturerArray;
    
public:
    UStainedGlassSubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(ULevelVolumeSubsystem, STATGROUP_Tickables); }
};

