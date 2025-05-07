#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VDoorTeleportMarker.generated.h"

class USceneComponent;

UCLASS(Blueprintable, NotPlaceable)
class ALTAR_API AVDoorTeleportMarker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FormRefID;
    
public:
    AVDoorTeleportMarker(const FObjectInitializer& ObjectInitializer);

};

