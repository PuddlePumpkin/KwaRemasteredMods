#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "VActor.h"
#include "VAmbientDelimiter.generated.h"

class UAkAudioEvent;
class USplineComponent;

UCLASS(Blueprintable)
class ALTAR_API AVAmbientDelimiter : public AVActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AmbientUpdateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LeftAmbientEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RightAmbientEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopDelimiterAmbientEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineWidth;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    AVAmbientDelimiter(const FObjectInitializer& ObjectInitializer);

};

