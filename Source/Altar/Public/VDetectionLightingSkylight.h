#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VDetectionLightingSkylight.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ALTAR_API AVDetectionLightingSkylight : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SkylightIntensityCurve;
    
public:
    AVDetectionLightingSkylight(const FObjectInitializer& ObjectInitializer);

};

