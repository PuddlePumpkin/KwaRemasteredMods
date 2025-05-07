#pragma once
#include "CoreMinimal.h"
#include "VDoorNavLinkProxy.h"
#include "VPatrolDoorNavLinkProxy.generated.h"

class AVPatrolDoorNavLinkProxy;

UCLASS(Blueprintable)
class ALTAR_API AVPatrolDoorNavLinkProxy : public AVDoorNavLinkProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPatrolDoorNavLinkProxy* PairedNavLink;
    
public:
    AVPatrolDoorNavLinkProxy(const FObjectInitializer& ObjectInitializer);

};

