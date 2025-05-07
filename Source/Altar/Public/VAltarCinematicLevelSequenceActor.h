#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "EVCinematicType.h"
#include "VAltarCinematicLevelSequenceActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class ALTAR_API AVAltarCinematicLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVCinematicType CinematicType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<AActor>> ActorBindings;
    
    AVAltarCinematicLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

};

