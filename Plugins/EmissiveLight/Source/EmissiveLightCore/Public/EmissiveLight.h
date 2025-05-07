#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EmissiveLight.generated.h"

class UEmissiveLightComponent;

UCLASS(Blueprintable, MinimalAPI)
class AEmissiveLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmissiveLightComponent* EmissiveLightComponent;
    
    AEmissiveLight(const FObjectInitializer& ObjectInitializer);

};

