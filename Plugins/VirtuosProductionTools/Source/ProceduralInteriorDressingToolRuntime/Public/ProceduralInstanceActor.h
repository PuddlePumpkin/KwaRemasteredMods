#pragma once
#include "CoreMinimal.h"
#include "ActorPartition/PartitionActor.h"
#include "ProceduralInstanceActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class PROCEDURALINTERIORDRESSINGTOOLRUNTIME_API AProceduralInstanceActor : public APartitionActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
public:
    AProceduralInstanceActor(const FObjectInitializer& ObjectInitializer);

};

