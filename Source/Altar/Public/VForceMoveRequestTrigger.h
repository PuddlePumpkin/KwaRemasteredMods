#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TriggerBox.h"
#include "VForceMoveRequestTrigger.generated.h"

class AActor;
class AVPairedPawn;

UCLASS(Blueprintable)
class ALTAR_API AVForceMoveRequestTrigger : public ATriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AllowedPawnFormIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> DestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DestinationLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AVPairedPawn*> ProcessedPawns;
    
public:
    AVForceMoveRequestTrigger(const FObjectInitializer& ObjectInitializer);

};

