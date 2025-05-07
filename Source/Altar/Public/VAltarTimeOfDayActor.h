#pragma once
#include "CoreMinimal.h"
#include "ATMTimeOfDayActor.h"
#include "VAltarTimeOfDayActor.generated.h"

class AVAltarMoonActor;
class AVAltarStarsActor;
class AVAltarSunActor;

UCLASS(Blueprintable)
class AVAltarTimeOfDayActor : public AATMTimeOfDayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVAltarMoonActor* MoonMasser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVAltarMoonActor* MoonSecunda;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVAltarStarsActor* Stars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVAltarSunActor* Sun;
    
    AVAltarTimeOfDayActor(const FObjectInitializer& ObjectInitializer);

};

