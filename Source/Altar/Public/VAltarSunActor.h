#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VAltarSunActor.generated.h"

UCLASS(Blueprintable)
class AVAltarSunActor : public AActor {
    GENERATED_BODY()
public:
    AVAltarSunActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSunState(float AxisX, float AxisY, float AxisZ, float SunriseBegin, float SunsetEnd);
    
};

