#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "MoveRequestDestinationData.h"
#include "MoveRequestDestinationSpatialIndexSubsystem.generated.h"

class AAIController;
class AActor;

UCLASS(Blueprintable)
class STEERINGBEHAVIORS_API UMoveRequestDestinationSpatialIndexSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMoveRequestDestinationData> OctreeIdMoveRequestDestinations;
    
public:
    UMoveRequestDestinationSpatialIndexSubsystem();

    UFUNCTION(BlueprintCallable)
    void RegisterMoveRequestDestination(const AAIController* AIController, const FAIRequestID& MoveRequestId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnControllerEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintPure)
    void GetMoveRequestDestinationsInRadius(const FVector& SphereCenter, const double SphereRadius, UPARAM(Ref) TArray<FMoveRequestDestinationData>& MoveRequestDestinations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAIRequestID GetCurrentMoveRequestId(const AAIController* AIController);
    
};

