#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "VDoorNavLinkProxy.generated.h"

class AActor;

UCLASS(Blueprintable)
class ALTAR_API AVDoorNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FTimerHandle> ControllerTimerPairs;
    
public:
    AVDoorNavLinkProxy(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSmartNavLinkReached(const AActor* MovingActor, const FVector& DestinationPoint);
    
};

