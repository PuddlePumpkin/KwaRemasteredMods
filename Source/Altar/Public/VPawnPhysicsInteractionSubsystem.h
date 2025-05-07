#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "VPawnPhysicsInteractionData.h"
#include "VPawnPhysicsInteractionSubsystem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVPawnPhysicsInteractionSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVPawnPhysicsInteractionData> OngoingInteractions;
    
public:
    UVPawnPhysicsInteractionSubsystem();
	
    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(ULevelVolumeSubsystem, STATGROUP_Tickables); }
};

